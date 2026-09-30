#include <stdio.h>
int main()
{
    char a;
    scanf("%hhu", &a);
    a &= (a - 1);
    printf("%b", a);
    return 0;
}