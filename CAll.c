#include <stdio.h>

int main() {
    int num = 5;+

    // ---------------- Control Statements ----------------
    printf("=== Control Statements ===\n");

    // if statement
    if (num > 0) {
        printf("if: %d is positive\n", num);
    }

    // if-else statement
    if (num % 2 == 0) {
        printf("if-else: %d is even\n", num);
    } else {
        printf("if-else: %d is odd\n", num);
    }

    // nested if
    if (num > 0) {
        if (num < 10) {
            printf("nested if: %d is between 1 and 9\n", num);
        }
    }

    // switch statement
    printf("switch: ");
    switch (num) {
        case 1:
            printf("Number is One\n");
            break;
        case 5:
            printf("Number is Five\n");
            break;
        default:
            printf("Number is something else\n");
            break;
    }

    // ---------------- Loop Statements ----------------
    printf("\n=== Loop Statements ===\n");

    // for loop
    printf("for loop: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // while loop
    printf("while loop: ");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // do-while loop
    printf("do-while loop: ");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");

    // break and continue
    printf("\nbreak and continue demo:\n");
    for (int x = 1; x <= 5; x++) {
        if (x == 3) {
            printf("  Skipping 3 (continue)\n");
            continue;
        }
        if (x == 5) {
            printf("  Breaking at 5\n");
            break;
        }
        printf("  Value: %d\n", x);
    }

    return 0;
}
