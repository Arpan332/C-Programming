#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int i,n,m;
	int flag=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++){
		if(n%i==0){
			printf("\n%d is not prime",n);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is Prime\n",n);
	}
}

