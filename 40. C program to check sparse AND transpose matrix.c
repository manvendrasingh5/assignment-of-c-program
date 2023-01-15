#include<stdio.h>
int main(){
	int i,j,r,c,n;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of coloumns:");
	scanf("%d",&c);
	int a[r][c],b[r][c];
	for(i=0;i<r;i++){
		printf("Enter row no.%d\n",(i+1));
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			n++;
		}
	}
	printf("Entered matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d	",a[i][j]);
		}
		printf("\n");
	}
	if(n>(r*c)/2)
	printf("It is a sparse matrix\n");
	else
	printf("It is not a sparse matrix\n");
	printf("Transposed matrix is\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d	",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}