#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int n,r,temp;
	int sum=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum){
		printf("%d is armstrong\n",temp);
	}
	else{
		printf("%d is not armstrong\n",temp);
	}
}

