#include <stdio.h>
#include <stdlib.h>

using namespace std;

void recursiveFunction(int num) {
	if (num < 100)
		recursiveFunction(num + 1);
	printf("%d\n", num);
}

int main()
{
	recursiveFunction(1);
	printf("\n");
	system("pause");
	return 0;
}
