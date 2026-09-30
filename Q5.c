#include <stdio.h>
int main()
{
    char a;
    scanf("%hhu", &a);
    if (a & 1)
    printf("Odd");
    else
    printf("Even");
    return 0;
}