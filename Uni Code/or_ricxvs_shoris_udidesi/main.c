/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 9 ნოემბერი, 2010
/* პროგრამა: ორ რიცხვს შორის უდიდესის პოვნა
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int a,b,max;

	printf("shemoitanet a: ");
		scanf("%d",&a);
	printf("shemoitanet b: ");
		scanf("%d",&b);
	
	//ვარიანტი 1
	//if (a > b){
	//	max = a;
	//} else {
	//	max = b;
	//}

	//ვარიანტი 2
	//max = a;
	//if (b > max) max = b;

	//ვარიანტი 3
	max = a>b ? a : b;

	printf("\nmaqsimaluria: %d",max);

	puts("");
	system("pause");
	return (0);
}
