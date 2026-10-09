#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t x  = 0xA5; //10100101 //00000100 >> 2 -> 000000001
    uint8_t y  = 0 ;
    int pos = 0 ;
    scanf("%d",&pos);
    if (y = x &(1<<pos)>>pos)
    {
        printf("%d" , y);
    }
    else 
        printf("%d" , y);
    return 0;
}