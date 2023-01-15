#include<stdio.h>
void main(){
    int i,j,a,b;
    printf("Please enter the number of rows: ");
    scanf("%d",&a);
    printf("Please enter the number of columns: ");
    scanf("%d",&b);
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==1||i==a||j==1||j==b){
                printf("* ");
            }
            else    
                printf("  ");
        }
        printf("\n");
    }
}