#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int n;
	float t,f,c,fa,ce;
	printf("Enter 1 for convert Celsius to Fahrenheit: \n");
	printf("Enter 2 for convert Fahrengeit to Celsius: \n");
	scanf("%d",&n);
	switch(n){
		case 1: 
			printf("Enter the temparature in degree Celsius: \n");
			scanf("%f",&c);
			fa=((9*c)/5)+32;
			printf("Temparature in Fahrenheit is: %f\n",fa);
			break;
		case 2:
			printf("Enter the temparature in degee Fahrenheit: \n");
			scanf("%f",&f);
			ce=5*(f-32)/9;
			printf("Temparature in degee Celsius: %f\n",ce);
			break;
		defalut: 
			printf("Choose wrong number!\n");	
			}
}
