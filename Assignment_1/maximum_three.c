#include<stdio.h>
void main(){
	printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
	int a,b,c;
	printf("Enter three numbers: \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		printf("%d is maximum between three numbers\n",a);
	else if(b>c && b>a)
		printf("%d is maximum between three numbers\n",b);
	else
		printf("%d is maximum between three numbers\n",c);
}
