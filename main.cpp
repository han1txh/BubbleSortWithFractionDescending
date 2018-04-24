#include "1m52.h"

int main(int argc, char* argv[])
{
	PHANSO *a;
	int n;
	Input(argv[1], a, n);
	BubbleSort(a, n);
	Output(argv[2], a, n);
	system("pause");
	return 0;
}