#include<stdio.h>
int add(int a, int b, int c){
	int result=a+b+c;
	
	//return result;
}
int main(){
	int d=5+add(10,20,6);
	printf("the sum of 10,20,30 is %d",d);
	return 1;
}
