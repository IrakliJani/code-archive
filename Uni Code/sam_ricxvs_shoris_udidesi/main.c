/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 9 ნოემბერი, 2010
/* პროგრამა: 
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int a,b,c,max;
	printf("shemoitanet a: ");
	scanf("%d",&a);
	printf("shemoitanet b: ");
	scanf("%d",&b);
	printf("shemoitanet c: ");
	scanf("%d",&c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("\nmaqsimaluria: %d",max);

	puts("");
	system("pause");
	return (0);
}
