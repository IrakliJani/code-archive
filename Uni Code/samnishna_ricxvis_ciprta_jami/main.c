/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 9 ნოემბერი, 2010
/* პროგრამა: სამნიშნა რიცხვის ციფრთა ჯამი
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int a = 999;
	int s = a%10 + (a%100)/10 + a/100;
	printf("a = %d, a-s ciprta jami ki udris: %d",a,s);

	puts("");
	system("pause");
	return (0);
}
