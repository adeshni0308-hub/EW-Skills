#include <stdio.h>
int main ()
{
    int a,b,c,d,e ;
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);
    e = (a|=(1<<b));
    d = (a&=~(1<<b));
    if (c==0)
    {
        printf ("%d", d);
    }
    else if (c==1)
    {
        printf ("%d", e);
    }
    else
    {
        printf ("Invalid input for set or clear.");
    }
    return 0;
}