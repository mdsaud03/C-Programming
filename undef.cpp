#include<stdio.h>
int a,b,c;
void mul(){
	printf("%d",a*b*c);
}
int main(){
	printf("enter the number:");
	scanf("%d %d %d",&a,&b,&c);
	mul();
}

