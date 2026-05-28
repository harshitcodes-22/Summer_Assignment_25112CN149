#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);

    if(n<0)
    printf("Factorial of negative number does not exist.");

    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("The factorial %d is %d",n,fact);
    }

return 0;

}