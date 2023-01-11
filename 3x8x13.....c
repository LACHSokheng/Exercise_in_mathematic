#include<stdio.h>
int main(){
	int i=1,n,p=1;
	printf("_____________ INPUT ________________\n");
	printf("\tEnter n:"); scanf("%d",&n);
	
	do{
		p = p*((5*i)-2);
		i++;
		
	}while(i <= n);
	
	printf("_____________ OUTPUT ________________\n");
	printf("\tResult P = %d",p);
	return 0;
	
}

//3 x 8 x 13 x ....
