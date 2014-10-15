/*

Modify the temperature conversion program to print a heading above the table

*/

#include <stdio.h>
#define FROM	0
#define TO		300
#define STEP	10

int main(){

	float C;
	int F;

	puts("Fahrenheit \t\t Celsius");

	for(F = FROM; F <= TO; F += STEP){
		C = (F - 32) / 1.8;
		printf("%3d F \t\t=\t %3.2f C\n", F, C);
	}

	return 0;
}
