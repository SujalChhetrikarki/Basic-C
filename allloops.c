//W.A.P to print all prime numbers between 1 to 100.
#include <stdio.h>
int main() {
    int i, j, isPrime;
    printf("Prime numbers between 1 and 100 are:\n");
    for(i = 2; i <= 100; i++) {
        isPrime = 1; // Assume number is prime
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}