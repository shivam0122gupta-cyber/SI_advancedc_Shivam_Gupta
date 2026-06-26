#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Negative numbers not allowed.\n");
    } else {
        int temp = num;
        while (num > 1) {
            factorial *= num;
            num--;
        }
        printf("Factorial of %d = %llu\n", temp, factorial);
    }
    return 0;
}
