#include<stdio.h>
int main(){
	int i,s=0,n;
	printf("Enter n= ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		s = s + i;
		
	}
	printf("Result Sn = %d",s);
}

// Sn = 1+2+3+...+n
