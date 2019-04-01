#include <stdio.h>
#include <unistd.h>
int main()
{
    int last;
    printf("Enter window size\n");
    int ws;
    scanf("%d", &ws);
    printf("Enter number of packets\n");
    int p;
    scanf("%d", &p);
    int i;
    for (i = 0; i < p; i++)
    {
        if ((i + 1) % ws != 0)
            printf("Packet %d sent\n", i + 1);
        else
        {
            printf("Packet %d sent\n", i + 1);
            printf("Waiting for Acknowledgement...\n");
            sleep(5);
            printf("Acknowledgement %d recieved\n", i + 2);
        }
    }
    if (p % ws != 0)
    {
        printf("Waiting for Acknowledgement...\n");
        sleep(5);
        printf("Acknowledgement %d recieved\n", i + 1);
    }
    printf("Enter the last packet recieved by the reciever\n");
    scanf("%d", &last);
    for (i = last; i > 0; i--)
    {
        printf("Recieved %d Packet Recieved\n", i);
    }
    return 0;
}