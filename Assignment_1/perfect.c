#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int n,i,r;
	int sum=0;
	printf("Enter a number: \n");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		r=n%i;
		if(r==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("%d is perfect number\n",n);
	}
	else{
		printf("%d is not a perfect number\n",n);
	}
}

