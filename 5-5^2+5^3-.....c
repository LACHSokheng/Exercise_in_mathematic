#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int sum=0,i=1;
	printf("Input n: ");scanf("%d", &n);
	do
	{
		sum = sum+(5*pow(-5,i-1));
		i=i+1;
	}while(i<=n);
	printf("Result: %d", sum);

	return 0;
}
