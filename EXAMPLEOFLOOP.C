//All example of c loops
#include <stdio.h>

int main() {
    // Example of for loop
    for (int i = 0; i < 5; i++) {
        printf("For loop iteration %d\n", i);
    }

    // Example of while loop
    int j = 0;
    while (j < 5) {
        printf("While loop iteration %d\n", j);
        j++;
    }

    // Example of do-while loop
    int k = 0;
    do {
        printf("Do-while loop iteration %d\n", k);
        k++;
    } while (k < 5);

    return 0;
}