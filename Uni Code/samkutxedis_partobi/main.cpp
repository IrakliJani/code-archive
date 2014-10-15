/*---------------------------------------*\
| Author: Irakli Janiashvili              |
| Date: 8:54 PM Friday, November 05, 2010 |
| About: სამკუთხედის ფართობის გამოთვლა         |
\*---------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	float a,b,c,p,s;
	puts("\nsamkutxedis partobis gamotvla misi gverdebis meshveobit");
	printf("\nshemoitanet gverdi a: ");
	scanf("%f",&a);
	printf("shemoitanet gverdi b: ");
	scanf("%f",&b);
	printf("shemoitanet gverdi c: ");
	scanf("%f",&c);
	if(a < b+c && b < a+c && c < b+a){
		p = (a + b + c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nsakmutxedis partobia: %.2f\n",s);
	} else {
		puts("\naseti samkutxedi ar arsebobs");
	}
	printf("\n");
	system("pause");
	return 0;
}
