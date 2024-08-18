#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	float a,x,b,result;
	printf("Enter the Value of a, x, b: \n");
	scanf("%f %f %f",&a,&x,&b);
	result=((a*x+b)/(a*x-b));
	printf("Result is: %.2f\n",result);
}


