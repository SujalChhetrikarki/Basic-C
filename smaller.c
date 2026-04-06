//W.A.P to find smaller of two numbers using conditional operator.
#include <stdio.h>  
int main() {
    int a, b, smaller;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    smaller = (a < b) ? a : b;
    printf("Smaller number is: %d\n", smaller);
    return 0;
}