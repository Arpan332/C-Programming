#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int i,n,n1,n2,n3;
	printf("Enter the range for fibonacci series: \n");
	scanf("%d",&n);
	n1=0;n2=1;
	printf("%d %d ",n1,n2);
	for(i=2;i<n;i++){
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	printf("\n");
}
