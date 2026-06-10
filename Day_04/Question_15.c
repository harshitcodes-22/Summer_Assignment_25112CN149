#include <stdio.h>

int main(){
    int n, originalNum, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d",&n);

    originalNum = n;

    while (originalNum!= 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.\n",n);
    else
        printf("%d is not an Armstrong number.\n",n);

    return 0;
}
