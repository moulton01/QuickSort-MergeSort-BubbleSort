#include <iostream> 
#include <string> 
#include <vector>
using namespace std; 

void insertionSort(vector <int> &sortingArray)
{
	int i, j, k; 
	int listLength = sortingArray.size();
	for (j = 1; j < listLength; j++)
	{
		k = sortingArray[j];
		for (i = j - 1; (i >= 0) && (sortingArray[i] < k); i--)
		{
			sortingArray[i + 1] = sortingArray[i];
		}
		sortingArray[i + 1] = k; 
	}

}