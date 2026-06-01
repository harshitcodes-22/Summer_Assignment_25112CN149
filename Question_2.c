#include<stdio.h>
int main(){
    int n,Table;
    printf("Enter the number:");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
      Table=n*i;
      printf(" %d*%d=%d\n",n,i,Table);
    }
    return 0;
    
}