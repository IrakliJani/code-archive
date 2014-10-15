/*

Write a program to print the corresponding Celsius to Fahrenheit table

*/

#include <stdio.h>
#define FROM 	-100
#define TO		100
#define STEP	10

int main(){

	int C;
	int F;

	for(C = FROM; C <= TO; C += STEP){
		F = (C * 1.8) + 32;
		printf("%4d C %d F\n", C, F);
	}

	return 0;
}
