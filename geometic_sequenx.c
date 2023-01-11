#include <stdio.h>
#include <math.h>
int main(){
	int n,s=0,i=1;
	printf("Enter n: "); scanf("%d", &n);
	do{
		s += (1/2 * pow (1/16,i-1));
		i++;
	}while (i <n);
	printf("Enter result: %d ",s);
}
