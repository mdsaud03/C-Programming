#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int add(int a, int b, int c){
	int d=0;
	int e=a+b+c;
	int f=a*b*c;
	return 0;
}

char getrandomchar(){
	char result;
	srand(time(NULL));
	while(1){
		for(char i='A';i<='z';i++){
			int r = rand();
			printf("%d\n",r);
			if(r%7==0){
				return i;
			}
		}
	}
}
int main(){
	int d=add(25,34,56);
	printf("the sum of number is %d\n",10+23+2);
	printf("%c\n",getrandomchar());
	return 400;
}
