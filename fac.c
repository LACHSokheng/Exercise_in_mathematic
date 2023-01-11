#include<stdio.h>  
int main(){
    int i,sum=1,n,fact;    
	printf("Enter a number: ");    
    scanf("%d",&n);    
    if(n < 0 ){
    	printf("Please Try Again!\n");
	}else if (n >0){
		fact=1;
		for(i=1;i<=n;i++){    
    	sum=sum*i; 
		fact=fact+sum;      
	 	}
//		fact=fact+sum;     
		printf("Factorial of %d is: %d",n,sum); 
	}else{
		printf("Factorial of %d is: %d",n,sum);
	}
  return 0;  
}   
//1!+2!+3!+....
