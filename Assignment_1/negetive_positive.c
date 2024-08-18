#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int num;
	printf("Enter a number: \n");
	scanf("%d",&num);
	if(num==0)
		printf("Number is Zero\n");
	else if(num>0)
		printf("This is a positive number\n");
	else
		printf("This is a negetive number\n");
}

