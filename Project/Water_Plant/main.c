/* This program will add customers data to the sqite database  */
#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int createDatabase();
int insertDataIntoDatabase();
int searchDatabasess();

int callback(void *, int, char **, char **);

int main(void) {
	int option;
	int i;
	sqlite3 *db;
	int var;

	char *databaseOptions[] = {
		"0. Quit the program",
		"1. Create the database",
		"2. Insert Data into database",
		"3. Update the data of database",
		"4. Search the data in the database",
		"5. Delete the database",
	};

	int optionsLength = sizeof(databaseOptions) / sizeof(databaseOptions[0]);

	while (1) {

		printf("Select an option\n");
		for (i = 0; i < optionsLength; i++) {
			printf("%s\n", databaseOptions[i]);
		}
		printf("\nOption: ");
		scanf("%d", &option);

		switch (option) {
			case 0:
				exit(0);
			case 1:
				createDatabase();
				break;
			case 2:
				insertDataIntoDatabase();
				break;
			case 3:
				break;
			case 4:
				searchDatabasess();
				break;
			default:
				exit(1);
		}
	}

	// 3. Update the data of the database

	// 4. Delete database

	// 5. Search data in the database

	return 0;
}

// 1. Create the database

int createDatabase() {
	sqlite3 *db;
	sqlite3_stmt *res;

	/* I want to create a database, but its name should be given by the user */
	/* I want to scan database name and put it in sqlite3_open */
	/* char* databaseName; */
	/*  */
	/* scanf("%s", databaseName); */

	int responseConnection = sqlite3_open("customers.db", &db);

	if (responseConnection != SQLITE_OK) {
		fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);

		return 1;
	}

	printf("\nDatabase has been created successfully\n");

	responseConnection =
		sqlite3_prepare_v2(db, "SELECT SQLITE_VERSION()", -1, &res, 0);

	if (responseConnection != SQLITE_OK) {
		fprintf(stderr, "Failed to fetch data: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return 1;
	}

	responseConnection = sqlite3_step(res);

	sqlite3_finalize(res);
	sqlite3_close(db);

	return 0;
}

// 2. Insert data into database
int insertDataIntoDatabase() {
	sqlite3 *db;
	char *err_msg = NULL;

	int rc = sqlite3_open("customers.db", &db);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return 1;
	}

	char *sql = "DROP TABLE IF EXISTS Customers;"
		"CREATE TABLE Customers(Name TEXT, Number TEXT, Bubble TEXT, "
		"Melton TEXT, Owe TEXT, Deposit TEXT);"
		"INSERT INTO Customers VALUES('Abdul Basith', '123454', '2b', "
		"'2mc', '50', 'nd');"
		"INSERT INTO Customers VALUES('Mujju', '12343223', '2bc', '2m', "
		"'0', '500');"
		"INSERT INTO Customers VALUES('Siraj Uddin', '32523465', '2b', "
		"'0', '500', 'nd');";
	rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", err_msg);
		sqlite3_free(err_msg);
		sqlite3_close(db);
	} else {
		fprintf(stdout, "Table Customers created successfully\n");
	}

	int last_id = sqlite3_last_insert_rowid(db);
	printf("The last Id of the inserted row is %d\n", last_id);

	sqlite3_close(db);

	return 0;
}

// Search database function
int searchDatabasess() {
	sqlite3 *db;
	char *err_msg;

	int rc = sqlite3_open("customers.db", &db);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "Failed to open the database\n");
		sqlite3_close(db);
		return 1;
	}

	char *sql = "SELECT * FROM Customers;";
	/* char *sql = "SELECT  FROM Customers;"; */

	rc = sqlite3_exec(db, sql, callback, 0, &err_msg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "Failed to select data\n");
		fprintf(stderr, "sql error: %s\n", err_msg);
		free(err_msg);
		sqlite3_close(db);
		return 1;
	}

	sqlite3_close(db);

	return 0;
}

int callback(void *notUsed, int argc, char **argv, char **azColName) {
	int i;
	notUsed = 0;
	for (i = 0; i < argc; ++i) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}
