#include <stdio.h>
#include <math.h>

int main(){
    int first, last, n, temp, digit, digits, sum;

    printf("Enter the start of range: ");
    scanf("%d", &first);

    printf("Enter the end of range: ");
    scanf("%d",&last);

    printf("Armstrong numbers between %d and %d are:\n", first, last);

    for (n = first; n <= last; n++) {
        temp = n;
        digits = 0;
        sum = 0;

        
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        
        while(temp != 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}