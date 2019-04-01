//PARITY CHECK
#include <stdio.h>
#include <string.h>
char c[20];
void sender()
{
    printf("\nSender Function\n");
    gets(c);
    int i = 0;
    int count = 0;
    for (; i < strlen(c); i++)
        if (c[i] == '1')
            count++;
    c[i] = '1';
    if (count % 2 == 0)
        c[i] = '0';
    puts(c);
}
void reciever()
{
    printf("Reciever function\n");
    char c1[20];
    gets(c1);
    int i = 0;
    int count = 0;
    for (; i < strlen(c1); i++)
        if (c1[i] == '1')
            count++;
    c1[i] = '1';
    if (count % 2 == 0)
        c1[i] = '0';
    if (c1[i] == c[i])
        printf("\nNo Error Detected");
    else
        printf("\nError Detected");
}
int main()
{
    sender();
    reciever();
    return 0;
}