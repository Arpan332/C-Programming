#include<stdio.h>
int fact(int r){
	int mul=1;
	for(int i=1;i<=r;i++){
		mul=mul*i;
	}
	return mul;
}
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int i,n,f,r,k;
	int sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	k=n;
	while(k!=0){
		r=k%10;
		f=fact(r);
		k=k/10;
		sum=sum+f;
	}
	if(sum==n){
		printf("%d is strong number\n",n);
	}
	else
		printf("%d is not a strong number\n",n);
}
