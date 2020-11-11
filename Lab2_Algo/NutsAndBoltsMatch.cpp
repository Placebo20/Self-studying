#include "NutsAndBoltsMatch.h"

//Просто вивід массивів
void NutsAndBoltsMatch::printArray(char array[], int n)
{
	for (size_t i = 0; i < n; i++)
		cout << array[i] << " ";
	cout << endl;
}

//Повертає індекс розділу масиву на основі елемента зведення іншого масиву.
int NutsAndBoltsMatch::partition(char arr[], int low, int high, char pivot)
{
	int i = low;
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			swap(arr[i], arr[j]);
			i++;
		}
		else if (arr[j] == pivot)
		{
			swap(arr[j], arr[high]);
			j--;
		}
	}
	swap(arr[i], arr[high]);

	return i;
}

//Вибираємо останній символ масиву болтів для розділення гайок. Тепер, використовуючи partition з гайками, вибираємо,
//що для підходить для partition болтів. Повторяємо для [low...pivot-1] & [pivot+1...high] для гайок та болтів.
void NutsAndBoltsMatch::matchPairs(char nuts[], char bolts[], int low, int high)
{
	if (low < high)
	{


		// Choose last character of bolts array for nuts partition. 
		int pivot = partition(nuts, low, high, bolts[high]);

		// Now using the partition of nuts choose that for bolts partition.
		partition(bolts, low, high, nuts[pivot]);

		// Recur for [low...pivot-1] & [pivot+1...high] for nuts and bolts array.
		matchPairs(nuts, bolts, low, pivot - 1);
		matchPairs(nuts, bolts, pivot + 1, high);
	}
}

//Цей алгоритм спочатку знаходить partition, вибираючи останній елемент масиву болтів як опорний, переставляє масив
//nut і повертає індекс розділу „i“ таким чином, що всі гайки, менші за гайки[i], знаходяться з лівого боку та все
//гайки більші за гайки[i] знаходяться з правого боку. Далі за допомогою гайок[i] ми можемо розділити масив болтів.
//Операції розділення можуть бути легко реалізовані в O(n). Тепер ми застосовуємо це розділення рекурсивно до лівого та правого підмасиву
void NutsAndBoltsMatch::PartitionMatch(char nuts[], char bolts[], int n)
{
	matchPairs(nuts, bolts, 0, n - 1);
	cout << "Matched nuts and bolts are : \n";
	printArray(nuts, n);
	printArray(bolts, n);
}

NutsAndBoltsMatch::NutsAndBoltsMatch()
{
}

NutsAndBoltsMatch::~NutsAndBoltsMatch()
{
}