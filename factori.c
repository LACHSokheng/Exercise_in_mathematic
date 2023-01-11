#include<stdio.h>
#include<math.h>

int main(){
	int i=1,F= 1,n;
	float s;
	system("color 9");
	printf("_____________ INPUT ________________\n");
	printf("\tEnter n:"); scanf("%d",&n);
	s= i;
	do{
		//s= i;
		s = s + F*(sqrt(2*i));
		F*=i;
		i++;
		
	}while(i <= n);
	
	printf("_____________ OUTPUT ________________\n");
	printf("\tResult S = %f",s);
	
}
