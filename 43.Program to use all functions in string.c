#include <stdio.h>
#include <string.h>
int main () {
char str1[12];
char str2[12];
char str3[12];
int len ;
printf("Enter 2 strings:\n");
gets(str1);
gets(str2);
strcpy(str3,str1);
printf("strcpy( str3,str1):",str3);
strcat( str1, str2);
printf("strcat( str1,str2): %s\n", str1 );
len = strlen(str1);
printf("strlen(str1) : %d\n", len );
return 0;
}
