#include<stdio.h>
int main(){
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if (number<0){
		printf("number is negative");
	}
	else if(number==0){
		printf("number is eqaul");
	}
	else{
		printf("number is positive");
	}
}
