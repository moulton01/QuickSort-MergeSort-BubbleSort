#include <iostream>
#include <string>
#include <vector>
#include "MergeSort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
using namespace std; 

int main(){

	vector <int> sortingArray {-22, 10, 43, 23, -78, 45, 100, 123, 56, 98, 41, 90, 24, 96, 86, -30};
	int inputChoice; 
	int pivot = 0, leftArrow = 0, rightArrow = 14, randomNum;

	displayAll(sortingArray);

	cout << "\n\nHow would you like to sort this array?\n1. Quick Sort?\n2. Insertion Sort?\n3. Merge Sort?\n"; 
	cin >> inputChoice; 

	switch (inputChoice) {
	case 1: 
		QuickSort(sortingArray, leftArrow, rightArrow); 
		break; 
	case 2: 
		insertionSort(sortingArray); 
		break;
	case 3: 
		mergeSort(sortingArray, 0, 15); 
		break; 
	default: 
		cout << "Invalid Input"; 
		break; 

	}	

	cout << "\n\n";

	displayAll(sortingArray); 

	sortingArray.clear(); 

	system("pause");
}