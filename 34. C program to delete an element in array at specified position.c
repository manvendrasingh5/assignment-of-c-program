#include<stdio.h>
 
void main() 
{
    int a[100],i,n,pos;
 
    printf("\nEnter no of elements\n");    
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    
    printf("Elements of array are\n");
    for(i=0;i<n;i++) 
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    printf("Enter the position from which the number has to be deleted\n");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\nOn Deletion, new array we get is\n");
    for(i=0;i<n;i++) 
    {
        printf("a[%d] = %d\n",i,a[i]);
    }
}