#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(void)
{
    int cycles;
    char cont[5];
    puts("Traffic Light Program Starting Now!");
    puts("Enter -1 to quit:");
    printf("%s", "how many traffic light cucles do you want to simulate?");
    scanf("%d", &cycles);

    while (cycles != -1)
    {
        for (int i = 0; i < cycles; i++)
        {
            printf("%s", "\n");
            puts("RED");
            Sleep(1000);
            puts("YELLOW");
            Sleep(1000);
            printf("GREEN");
            Sleep(1000);

            printf("\n");
        }
        printf("%s", "\nDo you want to continue simulation? (y/n) ");
        scanf("%s", cont);
        if (_stricmp(cont, "y") == 0)
        {
            continue;
        }
        else if (_stricmp(cont, "n") == 0)
        {
            puts("Simulation for two trafic light cycles complete!");
            break;
        }
        else
        {
            printf("Invalid Input");
            printf("%s", "\nDo you want to continue simulation? (y/n) ");
            scanf("%s", cont);
        }
    }
}