/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 5 ნოემბერი, 2010
/* პროგრამა: კვადრატული განტოლების ამოხსნა
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a,b,c,d,x1,x2,x;

	puts("\nkvadratuli gantolebis amoxsna (a*x^2 + b*x + c)\n");
	printf("sheikvanet wevri a: ");
		scanf("%f",&a);

	if (a == 0) puts("\nwrpivi gantolebis amoxsna (b*x + c)\n");

	printf("sheikvanet wevri b: ");
		scanf("%f",&b);
	printf("sheikvanet wevri c: ");
		scanf("%f",&c);

	d = pow(b,2) - 4*a*c;
	if (a != 0){
		if (d > 0){
			x1 = (-b + sqrt(d)) / (2*a);
			x2 = (-b - sqrt(d)) / (2*a);
			printf("\nx1 = %.2f\n",x1);
			printf("x2 = %.2f\n",x2);
		}
		else if (d == 0){
			x1 = -b / (2*a);
			printf("\nx1 = x2 = %.2f\n",x1);
		}
		else {
			puts("\nkvadratul gantolebas ar aqvs amonaxsni namdvil ricxvta simravleshi");
		}
	}
	else {
		if (b != 0){
			x = -c/b;
			printf("\nx = %.2f\n",x);
		}
		if (b == 0 && c == 0){
			puts("\ngantolebas aqvs uamravi amonaxsni");
		}
		else{
			puts("\ngantolebas ar aqvs amonaxsni");
		}
	}

	puts("");
	system("pause");
	return 0;
}
