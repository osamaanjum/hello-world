#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; // Using long long to handle larger numbers
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Check if the number is negative
    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } 
    else {
        // Calculate factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        
        printf("Factorial of %d = %lld\n", num, factorial);
    }
    
    return 0;
}
