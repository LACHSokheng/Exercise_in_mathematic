#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n,i = 1;
	float s = 0;
	printf("Enter n:"); scanf("%d",&n);
	do{
		s = s+(1*pow(1/2,i-1));
		i++;
		
	}while(i <= n);
	printf("The Result Sn = %.2f",s);

}

//1 x 1/2 x 1/2^2 x ... x 1/2^n-1

