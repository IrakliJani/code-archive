/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 9 ნოემბერი, 2010
/* პროგრამა: სამნიშნა რიცხვის შეტრიალებული რიცხვი
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int a;
	printf("shemoitanet samnishna ricxvi a: ");
	scanf("%d",&a);
	int s = (a%10)*100 + (a/10)%10*10 + a/100;
	printf("a = %d, a-s shetrialebuli ricxvia: %d",a,s);

	puts("");
	system("pause");
	return (0);
}
