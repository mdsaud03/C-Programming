#include<stdio.h>
int main(){
	int x=1,a;
	while(x<10)
	{
		printf("x=%d\n",x);
		a=x++;
		printf("a=%d\n",a);
	}
}
