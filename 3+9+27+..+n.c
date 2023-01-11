#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n,s = 0,i = 1;
	printf("Enter n:"); scanf("%d",&n);
	do{
		s = s+(3*pow(3,i-1));
		i++;
		
	}while(i <= n);
	printf("The Result Sn = %d",s);

}
//3+9+27+..+n
