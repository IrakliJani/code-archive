/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 6 ნოემბერი, 2010
/* პროგრამა: 2 წერტილს შორის მანძილი სივრცეში
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	float x1,x2,y1,y2,z1,z2,d;
	printf("\nA wertili\n");
	printf("shemoitanet x: ");
	scanf("%f",&x1);
	printf("shemoitanet y: ");
	scanf("%f",&y1);
	printf("shemoitanet z: ");
	scanf("%f",&z1);
	printf("\nB wertili\n");
	printf("shemoitanet x: ");
	scanf("%f",&x2);
	printf("shemoitanet y: ");
	scanf("%f",&y2);
	printf("shemoitanet z: ");
	scanf("%f",&z2);
	d = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
	printf("\nor, A da B wertils shoris mandzili sivrceshi aris %.2f\n",d);

puts("");
system("pause");
return (0);
}
