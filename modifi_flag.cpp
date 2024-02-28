#include<stdio.h>
int main(){
	int x=10;
	float y = 300.2005;
	printf("x=%d\n",x);
	printf("y=%.4f\n",y);
	printf("x=%05d\n",x); //zero flag lenght & precision 
	printf("hexa of x=%#X\n",x);
	printf("hexa of x=%X\n",x);
}

