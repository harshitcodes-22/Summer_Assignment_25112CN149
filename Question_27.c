#include<stdio.h>
int sod(int n);

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of digit is %d",sod(n));
    return 0;
}
int sod(int n){
    if(n==0)
    return 0;
    else{
        return (n%10+sod(n/10));
    }
}