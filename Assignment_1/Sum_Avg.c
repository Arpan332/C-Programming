#include<stdio.h>
void main(){
	int a,b,c,sum,avg;
	printf("Name: Arpan Das, Class: MCA1A, Roll-No: 13\n");
	// Taking input from user
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter Second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	// Evaluate sum and avarage
	sum=a+b+c;
	avg=(a+b+c)/3;
	printf("Sum of three number is: %d",sum);
	printf("\nAverage of three number is: %d\n",avg);
}	
