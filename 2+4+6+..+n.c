#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,s=0;
	printf("Enter n:");
	scanf("%d",&n);
	i = 1;
	while(i <= n){
		
		s= s + 2*i;
		i++;
	}
	
	printf("S= %d",s);
}
/*
	assignment : 2 + 4 + 6 + ...  + n
	
*/
