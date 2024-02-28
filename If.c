#include<stdio.h>
int main(){
	int num ,rem;
	printf("enter the number:");
	scanf("%d",&num);
	rem= num%2;
	if(rem==0){
		printf("number is even ");
		
	}
	else{
		printf("number is odd");
	}
}
