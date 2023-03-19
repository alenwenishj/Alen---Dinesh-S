#include <stdio.h>
#include <stdarg.h>
#define print(...) printf(__VA_ARGS__)

int main()
{
    char data[]="C Programming";
    char data_1[]="User";
    char data_2[]="Programming modules";
    print("Welcome to %s\n",data);
    print("Hello to %s: Welcome to %s",data_1,data_2);
    return 0;
}
