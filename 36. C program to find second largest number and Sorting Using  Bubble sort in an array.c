
#include <stdio.h>

void main()
{

  int a[100],i,j,n,temp;


  printf ("Enter the number of elements");
  scanf ("%d",&n);

  printf("Enter the values");

  for (i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
   {
     if(a[i]>a[j])
    {   
       temp = a[i];
       a[i]=a[j];
       a[j]=temp;
     }   
   }

  }
   
     printf("Second largest element is %d",a[n-2]);

}