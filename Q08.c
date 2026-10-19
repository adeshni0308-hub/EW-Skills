#include <stdio.h>
#include <stdint.h>
int main()
{
    uint32_t a;
    int b,c,d,e=0;
    scanf ("%u%d%d",&a,&b,&c);
    d= (e|=(1<<c))-1;
    a|=(d<<b);
    printf("%u",a);
    return 0;
}