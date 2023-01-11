#include<stdio.h>
#include<conio.h>
int main(){
	int n,i= 1,s = 1;
	printf("Enter n = ");
	scanf("%d",&n);
	
	do{
		s = s +((2*i +1));
		i ++;
		
		
	}while(i < n);
	printf("\nResult Sn = %d",s);
}

// Sn = 1 + 3 + 5 + ... + (2n + 1)
