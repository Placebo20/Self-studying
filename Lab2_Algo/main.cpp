#include "NutsAndBoltsMatch.h"
#include <conio.h>
#include <iostream>

int main()
{
	char nuts[] = { '@', '#', '$', '%', '^', '&' };
	char bolts[] = { '$', '%', '&', '^', '@', '#' };
	int n = sizeof(nuts) / sizeof(nuts[0]);
	NutsAndBoltsMatch a;
	a.PartitionMatch(nuts, bolts, n);
	std::cout << "That's all" << std::endl;
	return 0;
}