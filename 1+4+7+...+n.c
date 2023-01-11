#include<stdio.h>
int main(){
	int n,s=0 ,i = 1;
	printf("Enter n="); scanf("%d",&n);
	do {
		s = s +(3*i -2);
		i++;
		
	}while(i <= n);
	printf("\nThe Result Sn = %d ",s);
}
