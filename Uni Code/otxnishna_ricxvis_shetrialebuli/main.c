/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 14 ნოემბერი, 2010
/* პროგრამა: ოთხნიშნა რიცხვის შეტრიალებული
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a,b;

	printf("shemoitanet 4nishna ricxvi: ");
		scanf("%d",&a);

	b = a%10*1000 + a%100/10*100 + a%1000/100*10 + a/1000;

	printf("%d",b);

	puts("");
	system("pause");
	return (0);
}
