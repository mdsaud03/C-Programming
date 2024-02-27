#include<stdio.h>
int a=5;
void fun(){
	int x;
	x=a*10;
	printf("x=%d\n",x);
	
}
void fun2(){
	int y;
	y=a*100;
	printf("y=%d\n",y);
}
int main(){
	printf("value of a=%d\n",a);
	fun();
	fun2();
	
}
