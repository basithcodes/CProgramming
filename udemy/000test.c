#include <stdio.h> 
enum months {Jan, Feb, Mar, Apr, May, June, July = 10, Aug, Sep, Oct, Nov, Dec};
  
int main() 
{ 
    enum months month = Dec; 
    printf("The day number stored in d is %d\n", month); 
    printf("hello world");
    return 0; 
}