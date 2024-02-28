#include<stdio.h>
int main(){
	int a=10;
	printf("enter the input:");
	scanf("%d",&a);
	if(a>0){
		if(a<=10){
			printf("number withiin 0 to 9");
		}
		else{
			printf("value more than 10");
		}
	}
	else{
		printf("input is negative");
	}
}
