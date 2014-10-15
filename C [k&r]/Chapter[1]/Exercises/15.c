/*

Rewrite the temperature conversion program of Section 1.2 to use a function for conversion

*/

#include <stdio.h>

float c_to_f(int arg);
float f_to_c(int arg);

int main(){

	printf("test 10 celsius to fahrenhait: %.2f\n", c_to_f(10));
	printf("test 10 fahrenhait to celsius: %.2f\n", f_to_c(10));

	return 0;
}

float c_to_f(int c){

	return c*9/5+32;

}

float f_to_c(int f){

	return (f-32)*5/9;

}
