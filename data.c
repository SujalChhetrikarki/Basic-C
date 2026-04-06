#include <stdio.h>

int main()
{
    FILE *p;
    char ch;

    // Writing to file
    p = fopen("ok.txt", "w");

    if (p == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    printf("Enter text (Ctrl+Z then Enter to stop):\n");

    while ((ch = getchar()) != EOF)
    {
        putc(ch, p);
    }

    fclose(p);
    printf("Data stored successfully!\n");

    // Reading from file
    printf("\nReading data from file:\n");

    p = fopen("ok.txt", "r");

    if (p == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    while ((ch = getc(p)) != EOF)
    {
        putchar(ch);
    }

    fclose(p);

    return 0;
}