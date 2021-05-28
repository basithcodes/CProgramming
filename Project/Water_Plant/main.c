/* This program will add customers data to the sqlite database  */

#include <stdio.h>
#include <string.h>
#include <sqlite3.h>
#include <stdlib.h>

int createDatabase();
int insertDataIntoDatabase();

int main(void)
{

	printf("%s\n", sqlite3_libversion());

	int option;
	int i;
	char *databaseOptions[] = {
		"0. Quit the program",
		"1. Create the database",
		"2. Insert Data into database", 
		"3. Update the data of database",
		"4. Search the data in the database",
		"5. Delete the database",
	};

	while (1) {

		printf("Select an option");
		for(i = 0; i < 5; i++) {
			printf("%s\n", databaseOptions[i]);
		}
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

	int responseConnection = sqlite3_open("customers.db", &db);

	if (responseConnection != SQLITE_OK) {
		fprintf(stderr, "Cannot open database: %s\n", 
				sqlite3_errmsg(db));
		sqlite3_close(db);
		return 1;
	}

	printf("Database has been created successfully\n");

	responseConnection = sqlite3_prepare_v2(db, "SELECT SQLITE_VERSION()", -1, &res, 0);

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
		"CREATE TABLE Customers(Id INT, Name TEXT, Number TEXT, Bubble TEXT, Melton TEXT, Owe TEXT, Deposit TEXT);"
		"INSERT INTO Customers VALUES(1, 'Abdul Basith', '9701648711', '2b', '2mc', '50', 'nd');"
		"INSERT INTO Customers VALUES(2, 'Mujju', '9701648712', '2bc', '2m', '0', '500');"
		"INSERT INTO Customers VALUES(3, 'Siraj Uddin', '9701648714', '2b', '0', '500', 'nd');";
	rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

	if (rc != SQLITE_OK) {
		fprintf(stderr, "SQL error: %s\n", err_msg);
		sqlite3_free(err_msg);
		sqlite3_close(db);
	}

	sqlite3_close(db);

	return 0;
}
