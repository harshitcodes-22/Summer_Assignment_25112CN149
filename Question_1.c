#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
    sum=sum+i;
    }
    printf("The sum of number is %d\n",sum);
    return 0;

}