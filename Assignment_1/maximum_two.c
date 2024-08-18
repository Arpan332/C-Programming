#include<stdio.h>
void main(){
	int a,b;
	printf("Enter two numbers: \n");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d is maximum between two numbers\n",a);
	}else{
		printf("%d is maximum beetween two numbers\n",b);
	}
}
