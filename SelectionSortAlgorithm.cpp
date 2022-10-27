#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
	int minIdx;                     //0  1  2  2
	for (int i = 0; i < n - 1; i++)//80 30 50 40
	{
		minIdx = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[minIdx])
				minIdx = j;
		swap(arr[minIdx], arr[i]);
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	
	}
}
int main()
{
	int arr[] = { 80,30,50,40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	SelectionSort(arr, n);
	cout << "Array After Selection Sort:" << endl;
	print(arr, n);
}