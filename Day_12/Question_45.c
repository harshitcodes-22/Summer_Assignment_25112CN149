#include <stdio.h>
int palindrome(int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a palindrome number.", num);
    else
        printf("%d is not a palindrome number.", num);

    return 0;
}
int palindrome(int n){
    int temp=n,rev=0,rem;

    while (n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return temp == rev;
}