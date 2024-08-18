#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA, Roll: 13\n");
	int i,n,r,temp;
	int sum=0;
	printf("Enter the number: \n");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum){
		printf("Palindrome Number \n");
	}
	else{
		printf("Not Palindrome Number\n");
	}
}

