#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите N (не больше 100): ";
	cin >> n;

	int arr[100];
	cout << "Введите " << n << " чисел ";
	for (int i = 0; i < n; i++) 
	{
		cin >> arr[i];
	}

	int sumPos = 0;
	int countNeg = 0;
	int maxElem = arr[0];
	int maxIndex = 0;

	for (int i = 0; i < n; i++) 
	{
		if (arr[i] > 0) 
		{
			sumPos += arr[i];
		}
		if (arr[i] < 0) 
		{
			countNeg++;
		}
		if (arr[i] > maxIndex) 
		{
			maxElem = arr[i];
			maxIndex = i;
		}
	}
	cout << "Сумма положительных: " << sumPos << endl;
	cout << "Количество отрицательных: " << countNeg << endl;
	cout << "Максимальный элемент: " << maxElem << " (индекс " << maxIndex << ")" << endl;
	return 0;
}
