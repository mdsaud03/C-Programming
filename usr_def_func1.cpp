#include<stdio.h>
int addt(int x){
	int add;
	add = x+x;
	return add;
}
int main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("addition of %d = %d\n",n,addt(n));
	return 0;
}
