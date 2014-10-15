/*  ავტორი: ირაკლი ჯანიაშვილი
/*  თარიღი: 13 ნოემბერი, 2010
/* პროგრამა: ობიექტ ორიენტირებული პროგრამირება
*/

#include <iostream>

using namespace std;

class Rectangle{

	int x;
	int y;

public:

	Rectangle(int a, int b){
		x = a;
		y = b;
	}

	Rectangle(){
		x = 4;
		y = 3;
	}

	int area(){
		return x * y;
	}

};

int main()
{
	Rectangle rect;

	cout<<"Area: "<<rect.area()<<endl;

	system("pause");
}
