/* auth: ირაკლი ჯანიაშვილი
/* date: 11 დეკემბერი 2010
/* last: 28 დეკემბერი 2010
/* desc: მათემატიკური ლოგიკური თამაში
*/

#include <stdio.h>	//printf scanf puts
#include <stdlib.h>	//rand srand
#include <time.h>		//time

void generate();

int g[4];

int main(){

	int in, count, mcount = 0, exist = 0, inplace = 0;
	int i[4];

	//რიცხვის გენერირება generate ფუნქციიდან
	generate();

	//ციკლი (მეორდება მანამ, სანამ შეტანილი რიცხვი არ გახდება გენერირებული რიცხვის ტოლი)
	while(1){
		//თიშავს ციკლს, როდესაც შეტანილი რიცხვი ტოლია გენერირებული რიცხვის
		if(i[0] == g[0] && i[1] == g[1] && i[2] == g[2] && i[3] == g[3]){
			printf("\ngilocavt! tqven gamoicanit ricxvi %d%d%d%d %d cdashi\n", g[0], g[1], g[2], g[3], mcount);
			break;
		}
		//რიცხვის შეტანა
		printf("\n-> ");
			scanf("%d", &in);
		
		//ამოწმებს არის თუ არა რიცხვი ოთხნიშნა
		if(in >= 1000 && in <= 9999){
			//გადაყავს მასივში შეტანილი რიცხვის ციფრები
			i[0] = in/1000;
			i[1] = (in%1000)/100;
			i[2] = (in%100)/10;
			i[3] = in%10;

			//ამოწმებს არის თუ არა ციფრები განსხვავებული
			if(i[0] != i[1] && i[0] != i[2] && i[0] != i[3] && i[1] != i[2] && i[1] != i[3] && i[2] != i[3]){

				//სვლის მთვლელი
				mcount++;

				//ეს 4 ციკლი ამოწმებს არსებობს თუ არა შეტანილი რიცხვის ციფრები გენერირებულ რიცხვში
				//for(count = 0; count <= 3; count++){
				//	if(i[0] == g[count]){
				//		exist++;
				//		break;
				//	}
				//}
				//for(count = 0; count <= 3; count++){
				//	if(i[1] == g[count]){
				//		exist++;
				//		break;
				//	}
				//}
				//for(count = 0; count <= 3; count++){
				//	if(i[2] == g[count]){
				//		exist++;
				//		break;
				//	}
				//}
				//for(count = 0; count <= 3; count++){
				//	if(i[3] == g[count]){
				//		exist++;
				//		break;
				//	}
				//}

				//ამოწმებს არის თუ არა ციფრები გენერირებულ რიცხვში თავის ადგილას
				//for(count=0; count <= 3; count++){
				//	if(i[count] == g[count]) inplace++;
				//}

				//if(i[0] == g[0]) inplace++;
				//if(i[1] == g[1]) inplace++;
				//if(i[2] == g[2]) inplace++;
				//if(i[3] == g[3]) inplace++;

				//გაერთიანებული ციკლი ანგარიშის დასათვლელად (ზედა, კომენტარში ჩასმული ციკლების მოკლე და გაუმჯობესებული ჩანაწერი)
				for(count = 0; count <= 3; count++){
					if(i[0] == g[count]){
						exist++;
					}
					if(i[1] == g[count]){
						exist++;
					}
					if(i[2] == g[count]){
						exist++;
					}
					if(i[3] == g[count]){
						exist++;
					}
					if(i[count] == g[count]) inplace++;
				}

				//შედეგის დაბეჭდვა
				//printf("-> %d%d%d%d", i[0], i[1], i[2], i[3]);
				printf("\n(%d)--", mcount);
				printf("\n%d : %d\n", exist, inplace);
				puts("-----");
				//printf("<- %d%d%d%d", g[0], g[1], g[2], g[3]);

				//ანგარიშის განულება
				exist = 0;
				inplace = 0;

			}
			else{
				puts("shekvanili ricxvis shemadgeneli ciprebi unda ikos gansxvavebuli");
			}
		}
		else{
			puts("shekvanili ricxvi unda ikos otxnishna");
		}
	}
	
	//ფუნქცია generate-ს შემოწმება
	//int i;
	//for(i=0; i<=10000; i++){
	//	generate();
	//	printf("%d%d%d%d\n", g[0], g[1], g[2], g[3]);
	//	if(g[0] == g[1] || g[0] == g[2] || g[0] == g[3] || g[1] == g[2] || g[1] == g[3] || g[2] == g[3]){
	//		printf("|-(");
	//		break;
	//	}
	//}

	getch("pause"); // |-(
	return 0;
}
void generate(){

	//ფუნქცია generate-ს შემოწმება
	//int test;
	//test = rand();
	//srand(test);

	srand(time(0));

	//აგენერირებს რიცხვს ისე, რომ ყველა ციფრი განსხვავებულია და არ იწყება 0-ით
	g[0] = rand()%9+1;
	while(1){
		g[1] = rand()%9+0;
		if(g[0] != g[1]) break;
	}
	while(1){
		g[2] = rand()%9+0;
		if(g[2] != g[0] && g[2] != g[1]) break;
	}
	while(1){
		g[3] = rand()%9+0;
		if(g[3] != g[0] && g[3] != g[1] && g[3] != g[2]) break;
	}
}
