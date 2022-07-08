#include<iostream>
using namespace std;

void print(int** arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
	cout << "\n";
}

int main()
{
	int m = 3;//rows
	int n = 4;//columns

	int** arr = new int* [m];//creating
	for (int i = 0; i < m; i++)
		arr[i] = new int[n];

	for (int i = 0; i < m; i++)//filling
		for (int j = 0; j < n; j++)
			arr[i][j] = rand() % 11 + 10;//from 10 to 20

	print(arr, m, n);

	for (int i = 0; i < m; i++)//deletion
	{
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;
}