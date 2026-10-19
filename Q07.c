#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t a,b;
    scanf ("%hhu%hhu",&a,&b);
    if (a&(1<<b))
    {
        printf("1");
    }
    else
    {
        printf ("0");
    }
    return 0;
}