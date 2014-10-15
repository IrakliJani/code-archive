/*

Modify the temperature conversion program to print the table in reverse order, that is, from 300 degree to 0

*/

#include <stdio.h>
#define FROM	300
#define TO		0
#define STEP	10

int main(){

	float C;
	int F;

	puts("Fahrenheit \t\t Celsius");

	for(F = FROM; F >= TO; F -= STEP){
		C = (F - 32) / 1.8;
		printf("%3d F \t\t=\t %3.2f C\n", F, C);
	}

	return 0;
}
