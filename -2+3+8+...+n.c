#include<stdio.h>
int main(){
	int u,n,s = -2,i=1;
	printf("Enter n:");
	scanf("%d",&n);
	
	for( i = 1; i < n; i+=5){
		
		u = -2 + (n - 1)*5;
		s = n/2 * (-2 + u);
	}
	printf("Result = %d",s);
	
}
//Sn = -2+3+8+13+...+n
