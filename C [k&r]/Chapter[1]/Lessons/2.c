#include <stdio.h>

/*
ფარენგეიტის/ცელსიუსის ცხრილის დაბეჭდვა
for fahr = 0, 20, ..., 300
*/

int main(){

	//int fahr, celsius;
	float fahr, celsius;
	int lower, upper, step;


	lower = 0;
	upper = 300;
	step  = 30;

	fahr = lower;
	while(fahr <= upper){
		celsius = (5. / 9) * (fahr - 32);
		printf("%3.0f F%6.1f C\n", fahr, celsius);
		fahr = fahr + step;
	}

}
