#include<stdio.h>
int max(int a,int b){
    if (a>b){
        return a;
    }  
}
int min(int a,int b){
    if(b>a){
        return b;
    }
}

void main(){
    printf("Name: Arpan Das, Class: MCA1A, Roll: 13\n");
    int n1,n2;
    printf("Enter two number: \n");
    scanf("%d %d", &n1,&n2);
    printf("Maximum number is: %d\n", max(n1,n2));
    printf("Minimum number is: %d\n", min(n1,n2));
}