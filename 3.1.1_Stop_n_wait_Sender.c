#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char frame[20];
void send(char r);
void checkACK()
{
    int a;
    FILE *f;
    f = fopen("ack.txt", "r");
    fscanf(f, "%d", &a);
    fclose(f);
    if (a == 1)
    {
        printf("Acknowledgment received.");
        send('s');
    }
    else
    {
        printf("Resending frame...");
        send('r');
    }
}
void wait(int sec)
{
    clock_t now = clock();
    while (1)
    {
        clock_t diff = 100 * (clock() - now);
        int r = diff / CLOCKS_PER_SEC;
        if (r < sec)
        {
            system("@cls");
            printf("Time remaining: %d\n", sec - r);
        }
        else
        {
            system("@cls");
            printf("Time remaining: %d\n", 0);
            checkACK();
            return;
        }
    }
}
void send(char r)
{
    char a, b;
    if (r == 's')
    {
        printf("\nEnter frame to send: ");
        scanf("%s", frame);
    }
    FILE *f;
    f = fopen("data.txt", "w");
    fprintf(f, "%s", frame);
    fclose(f);
    printf("\nFrame sent.");
    printf("\nPress any key to start timer...");
    scanf("%c%c", &a, &b);
    wait(3);
}
int main()
{
    send('s');
    return 0;
}
