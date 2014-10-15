/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 14 ნოემბერი, 2010
/* პროგრამა: წრეწირის ფართობის გამოთვლა
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float r,s;

	printf("shemoitanet radiusis sigrdze: ");
		scanf("%f",&r);

	s = M_PI*pow(r,2);

	printf("%.2f",s);

	printf("\n");
	system("pause");
	return 0;
}
