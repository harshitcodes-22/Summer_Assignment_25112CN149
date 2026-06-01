#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter the number:");
    scanf("%d",&n); 
    if(n<0){
        printf("The factorial of negative number does not exist");
    }
    else{
    for (int i=1;i<=n;i++){
    factorial=factorial*i;
    }
    printf("The factorial of given number is %d\n",factorial);
    }
    return 0;
}