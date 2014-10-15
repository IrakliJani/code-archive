#include <stdio.h>
#include <stdlib.h>

float moduli(float K);

int main(){

	float K;
	printf("shemoitanet ricxvi: ");
		scanf("%f",&K);
	printf("%f",moduli(K));

	puts("");
	system("pause");
	return 0;
}

float moduli(float K){
	//if (K<0) K=-K;
	//return K;
	return fabs(K);
}
