#include<iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int ele)
{
	while(low <= high)
	{
	int mid = (low + high) / 2;
	if (arr[mid] == ele)
		return mid;
	if (arr[mid] > ele)
		high = mid - 1;
	else
		low = mid + 1;
}
	return -1;
}
int main()
{
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int num;
	cout << "Enter The number for search" << endl;
	cin >> num;
	int result = binarySearch(arr, 0, n - 1, num);
	if (result == -1)
		cout << "The Number :" << num << "wasn't found." << endl;
	else
		cout << "The Number is :" << arr[result] << "  was found at index  " << result << endl;


}