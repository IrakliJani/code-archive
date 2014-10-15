#include <stdio.h>
#include <stdlib.h>

using namespace std;

void recursiveFunction(int num) {
	printf("%d\n", num);
	if (num < 4)
		recursiveFunction(num + 1);
}

int main()
{
	recursiveFunction(1);
	printf("\n");
	system("pause");
	return 0;
}