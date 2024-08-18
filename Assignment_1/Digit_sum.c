#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll-13\n");
	int num,rem;
	int sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\nSum of all digit is: %d\n",sum);
}

