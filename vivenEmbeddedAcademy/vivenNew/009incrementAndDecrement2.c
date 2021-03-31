#include <stdio.h>

int main(void)
{
	int x = 7, y;
	/* float m = 2.4; */
	y = ++x * ++x ;
	printf("%d\n", y);
	/* printf("%d\n", ++m); */
	/* x = 3; */
	/* y = ++x + x++ + ++x; //7 4 4 */
	/* printf("%d\n", y); // 15 */
	/* x = 5; */
	/* y = ++x * ++x; // 7 * 7 */
	/* printf("%d\n", y); // 49 */

	return 0;
}
