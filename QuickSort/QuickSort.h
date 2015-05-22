#include <iostream>
#include <string>

using namespace std; 


void swapData(int &number1, int &number2)
{
	int temp;
	temp = number1;
	number1 = number2;
	number2 = temp;

}
void QuickSort(vector<int> &sortingArray, int left, int right){

	int pivot, leftArrow, rightArrow; 
	leftArrow = left; 
	rightArrow = right; 

	pivot = sortingArray[(left + right) / 2]; 
	do
	{
		while (sortingArray[rightArrow] < pivot)
			--rightArrow; 
		while (sortingArray[leftArrow] > pivot)
			++leftArrow; 
		if (leftArrow <= rightArrow)
		{
			swapData(sortingArray[leftArrow], sortingArray[rightArrow]);
			++leftArrow;
			--rightArrow;
		}

	} while (rightArrow >= leftArrow);

	if (left < rightArrow)
		QuickSort(sortingArray, left, rightArrow);
	if (leftArrow < right)
		QuickSort(sortingArray, leftArrow, right);
}
void displayAll(vector<int> &sortingArray)
{
	for (int i = 0; i < sortingArray.size(); i++)
	{
		cout << "{" << sortingArray[i] << "},";
	}

}
