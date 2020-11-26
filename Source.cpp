# include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i + 1 << " элемент массива = ";
		cin >> arr[i];
	}
	int min_index = 0, max_index = 0, sum = 0, summa = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[min_index])
		{
			min_index = i;
		}
		if (arr[i] > arr[max_index])
		{
			max_index = i;
		}
	}
	int temp = 0;
	if (min_index < max_index)
	{
		for (int i = min_index + 1; i < max_index; i++)
		{
			sum += arr[i];
		}
	}

	else if (min_index > max_index)
	{
		temp = min_index;
		arr[min_index] = arr[max_index];
		arr[max_index] = temp;
		for (int i = min_index + 1; i < max_index; i++)
		{
			summa += arr[i];
		}
	}

	cout << "Сумма элементов массива, находящихся между минимальным и максимальным элементами массива = " << sum << endl;
	
}