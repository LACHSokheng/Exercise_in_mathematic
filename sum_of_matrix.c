#include<stdio.h>
int main(){
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("Enert first of matrix : \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++)
    	{
			scanf("%d",&a[i][j]);
    	}
	}
	printf("Enter second of matrix : \n");
	for(i=0 ; i<2 ; i++){
		for(j=0 ; j<3 ; j++){
			scanf("%d",&b[i][j]);
    	}
	}
	printf("\nThe first of matrix is : \n");
	for(i=0 ; i<2 ; i++){
    	for(j=0 ; j<3 ; j++){
			printf("%d\t",a[i][j]);
    	}
    	printf("\n");
	}
	printf("\nThe second of matrix is : \n");
	for(i=0 ; i<2 ; i++){
    	for(j=0 ; j<3 ; j++){
			printf("%d\t",b[i][j]);
    	}
    	printf("\n");
  	}
	printf("\nThe third of matrix is : \n");
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
    	}
    	printf("\n");
	}
	return 0;
}
