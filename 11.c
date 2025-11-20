//write a program to print the series 1, 2, 3, 4, 5 using while loop
#include<stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d", i);
        if (i < 5) {
            printf(", ");
        }
        i++;
    }
    return 0;
}