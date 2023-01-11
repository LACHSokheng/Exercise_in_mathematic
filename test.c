#include<stdio.h>
#include<math.h>
int main(){
	int i=1,n;
	float F=1,s=0;
	printf("Enter n:"); scanf("%d",&n);
	
	do{
		s = s + F * (sqrt(2*i));
		F = F * i;
		i =  s;
		
	}while( i <= n);
	printf("Result S = %d",s);
	
}
