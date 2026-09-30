#include <stdio.h>
int main()
{
    char a;
    int i;
    scanf ("%hhu", &a);
    scanf ("%d", &i);
    a&=~(1<<i);
    printf ("%b",a);
    return 0;
}