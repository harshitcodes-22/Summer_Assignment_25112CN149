#include <stdio.h>

int main() {
    int first,last, i, j, isPrime;

    printf("Enter the starting number: ");
    scanf("%d", &first);

    printf("Enter the ending number: ");
    scanf("%d", &last);

    printf("Prime numbers between %d and %d are:\n", first,last);

    for (i = first; i <= last; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}