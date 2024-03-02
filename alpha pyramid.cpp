#include<stdio.h>
int main(){
	int i,j;
	/*printf("pyramid letter:");
	scanf("%c",&num);*/
	for( i='a';i<='z';i++){
		for( j='A'; j<=i; j++){
			printf("%c",j);
		}
		printf("\n");

	}
	
	
}
