#include<stdio.h>
enum weekdays {sun=1, mon, tue, wed, thur, fri, sat};

int main(){
	enum weekdays a;
	a=thur;
	printf("%d\n",a);
}
