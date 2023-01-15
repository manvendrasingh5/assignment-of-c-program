#include <stdio.h>

int main()
{
    int a, b, c;

  
    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);

    c = 180 - (a + b);

 
    printf("Third angle of the triangle = %d", c);

    return 0;
}