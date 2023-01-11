#include<stdio.h>
#include<math.h>

int main(){
	int i=1,sum=0,f=1,n;
	
	printf("\t\tINPUT \n");
	printf("\tEnter n:"); scanf("%d",&n);
	if (n < 0){
			do{
			f*=i;
			sum+=f;
			i++;
		}while(i < n);
		printf("\t\tOUTPUT\n");
	printf("\tResult Sum = %f",sum);
	}
	}else if(n==0){
		printf("\tSum=1");
	}else{
		do{
			f*=i;
			sum+=f;
			i++;
		}while(i < n);
		printf("\t\tOUTPUT\n");
	printf("\tResult Sum = %f",sum);
	}
//	printf("\t\tOUTPUT\n");
//	printf("\tResult Sum = %f",sum);
	
}
