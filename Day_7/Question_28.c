#include <stdio.h>
int reverseNumber(int n,int rev);

int main(){

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number = %d", reverseNumber(n,0));

    return 0;
}
int reverseNumber(int n,int rev){
    if (n == 0)
        return rev;
    return reverseNumber(n / 10,rev*10+(n%10));
}
