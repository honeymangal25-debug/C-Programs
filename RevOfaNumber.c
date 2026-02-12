#include<stdio.h>
int main(){
    int d;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev =0;
    while(n>0){
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    printf("Reverse of the number is %d\n",rev);
    return 0;

}