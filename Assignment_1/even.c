#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int num;
	printf("Enter a number: \n");
        scanf("%d",&num);
	if(num%2==0){
		printf("%d is a Even Number\n",num);
	}
	else{
		printf("%d is a Odd Number\n",num);
	}
}	
