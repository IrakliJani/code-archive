/*---------------------------------------------------------*\
| Author: ირაკლი ჯანიაშვილი                                   |
| Date: 1:05 AM Saturday, November 06, 2010                 |
| About: ორ წერტილს შორის მანძილი სიბრტყეზე                    |
\*---------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	float x1,x2,y1,y2,d;
	printf("\nA wertili\n");
	printf("shemoitanet x: ");
	scanf("%f",&x1);
	printf("shemoitanet y: ");
	scanf("%f",&y1);
	printf("\nB wertili\n");
	printf("shemoitanet x: ");
	scanf("%f",&x2);
	printf("shemoitanet y: ");
	scanf("%f",&y2);
	d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	printf("\nor, A da B wertils shoris mandzili sibrtkeze aris %.2f\n",d);

puts("");
system("pause");
return (0);
}
