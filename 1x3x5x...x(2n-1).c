#include <stdio.h>
int main(){
	int n, p=1, i=1;
	printf("Input n: ");scanf("%d", &n);
	do
	{
		p = p*(2*i-1);
		i++;
		
	}while(i <= n);
		printf("RESULT SUM = %d\n", p);
	return 0;
}
