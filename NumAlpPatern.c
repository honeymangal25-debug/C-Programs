#include<stdio.h>
int main(){
         int n;
    printf("enter a number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            int a = 1;
            for(int j=1;j<=i;j++){
                printf("%d ",a);
                a++;
            
            }
        }
        else{
            int b = 1;
            for(int j=1;j<=i;j++){
                int d = b+64;
                char ch = (char)d;

                printf("%c ",ch);
                b++;
            }
        }
        printf("\n");
    }

}
