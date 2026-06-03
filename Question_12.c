#include<stdio.h>
int main(){
    int n,rev=0,d,temp;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;

    while (n>0) {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
if(rev==temp){
    printf("The number is palindrome");
}
else{
    printf("The number is not palindrome");
}
return 0;
}