#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t a,b;
    scanf ("%hhu%hhu",&a,&b);
    a^=(1<<b);
    printf("%d",a);
    return 0;
}