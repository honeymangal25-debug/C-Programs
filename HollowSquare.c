#include<stdio.h>
int main(){
    int n;
    printf("enter a number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
            if(i==1 || i==n || j==1 || j==n+2){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}