#include <stdio.h>

int main(){
	
	int a[10][10],n,j,i;
	
	//printf("Enter number row : "); scanf("%d", &m);
	printf("Enter number square matrix (row - colum ): ");scanf("%d", &n);
	
	// input of matrix A
	
	printf("\nInput A-matrix :");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);	
		printf("\n");
	}
	
	// Output of matrix A
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			printf("%5d", a[i][j]);
			
		printf("\n");
	}
	
	// Output Result
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if (i >= j)
				printf("%5d", a[i][j]);
			else 
				printf(" ");
		}
		printf("\n");
	}
	
}
