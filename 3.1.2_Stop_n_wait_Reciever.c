#include <stdio.h>
void sendACK(int a)
{
    FILE *f;
    f = fopen("ack.txt", "w");
    fprintf(f, "%d", a);
    fclose(f);
    printf("\nAcknowledgment Sent.");
}
void receive()
{
    char frame[20];
    FILE *f;
    f = fopen("data.txt", "r");
    fscanf(f, "%s", frame);
    fclose(f);
    if (frame != NULL)
    {
        printf("\nReceived frame: %s", frame);
        sendACK(1);
    }
    else
    {
        printf("\nFrame not received.");
        sendACK(0);
    }
}
int main()
{
    receive();
    return 0;
}