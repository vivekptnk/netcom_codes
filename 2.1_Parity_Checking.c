#include <stdio.h>
int main()
{
    int parity = 0, num;
    printf("enter the number");
    scanf("%d", &num);
    while (num) //LOOP WILL OPERATE UNTILL NUMBER BECOMES 0..BY RIGHT SHIFTING AGAIN & AGAIN
    {
        if (num & 1) //....MAKE (num & 1)..&..extract 1 bit from 8 bit number..if that 1bit is 1 t    hen ...parity changes...else if that perticular bit is 0 found...then parity did not c    hnges...
            parity = !parity;
        num = num >> 1; //after checking 1st bit...check the next bit to thet bit which is already     checked...in the same 8 bit number...by shifting 1 right ..//
    }
    if (parity == 1) //1 is representing that parity is odd..//
        printf("parity is odd");
    else
        printf("parity is even"); //0 is representing that parity is even..//
    return 0;
}