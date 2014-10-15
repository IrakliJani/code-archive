#include <stdio.h>

/* ფარენგეიტ/ცელსიუსის ცხრილი #2 */

int main(){

	int fahr;

	for(fahr = 0; fahr < 300; fahr += 20){
		printf("%3d %6.1f\n", fahr, (5./9)*(fahr-32));
	}

}
