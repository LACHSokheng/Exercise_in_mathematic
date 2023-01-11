#include<stdio.h>
#include<math.h>
int main(){
  int i=1,n,sum= 0;
  printf("_____________ INPUT ________________\n");
  printf("\tEnter n:"); scanf("%d",&n);
  
  do{
    sum+= 2*(pow(3,i-1));
    i++;
    
  }while(i <= n);
  
  printf("_____________ OUTPUT ________________\n");
  printf("\tResult P = %d",sum);
  return 0;
  
}


