//FORMAT SPECIFIERS	
/*
"%d" - integer
"%f" - float
"%c" - character
"%s" - string
"%i" - signed integer
"%e" - exponential
"%E" - caps exponential
"%o" - octal value int
"%x" or "%X" - hexadecimal
"%p" - pointer		
*/
#include<stdio.h>
int main(){
	int a=10; float b=65546.678;
	double d= 55.00064446;
	short signed x=65535;
	printf("a=%d\n",a);
	printf("a=%i\n",a);
	printf("octal of a=%o\n",a);
	printf("hexa deciaml of a=%X\n",a);
	printf("short data=%d\n",x);
	printf("%E\n",b);
	printf("d=%f\n",d);
}
