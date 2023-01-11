#include<stdio.h>
#include<math.h>

int main(){
	int n, p = 1,i = 1; 
	float sum;
	printf("_____________ INPUT ________________\n");
	printf("\tEnter n:"); scanf("%d",&n);
	
	do {
		p *= i;
		sum += pow(1,i)*p *sqrt(2*i);
		i++;
		
		
	}while (i <= n);
	printf("_____________ OUTPUT ________________\n");
	printf("\tRESULT Sum = %.2f ",sum);
}

