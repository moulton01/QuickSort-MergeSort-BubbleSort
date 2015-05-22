#include <iostream>
#include <string>

using namespace std; 


void merge(vector<int> &sortedList, int low, int middle, int high){

	vector<int> temp;
	for (int i = 0; i < sortedList.size(); i++)
	{
		temp.push_back(sortedList[i]);
	}
	int i = low;
	int j = middle + 1;
	int k = low;
	
	while (i <= middle && j <= high){
		if (temp[i] <= temp[j]){
			sortedList[k] = temp[i];	
			i++;
		}
		else {
			sortedList[k] = temp[j];	
			j++;
		}
		k++;
		}
	while (i <= middle){
		sortedList[k] = temp[i];
		k++;
		i++; 
	}
}
	
	
	
void mergeSort(vector<int> &sortedList, int low, int high)
{
	if (low < high){
		int middle = (low + high) / 2;
	
		mergeSort(sortedList, low, middle);
		mergeSort(sortedList, middle + 1, high);
		merge(sortedList, low, middle, high);
	
	}
	
}