#include "header.h"

int** createArray(const int rows, const int cols)
{
	cout << "create array..." << endl;
	int** arr = new int*[rows];
	//create arr
	for (int j = 0; j < rows; j++)
	{
		arr[j] = new int[cols];
	}
	return arr;
}

void fillArray(int** arr, const int rows, const int cols)
{
	cout << "fill array..." << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}

void printArray( int** arr, const int rows, const int cols)
{
	cout << "print array..." << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
}

void copyArray(int** ofArr, int** atArr, const int rows, const int cols)
{
	cout << "copy array..." << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			atArr[i][j] = ofArr[i][j];
		}
	}
}

int* createArray(const int size)
{
	cout << "create array..." << endl;
	int* arr = new int[size];
	return arr;
}

void fillArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void push_front(int*& arr, int& size, const int value)
{
	cout << "pust front..." << endl;
	int* tempArr = new int[++size];
	tempArr[0] = value;
	//coppy num
	for (int i = 1; i < size; i++)
	{
		tempArr[i] = arr[i-1];
	}
	//delete old arr
	delete[] arr;
	arr = tempArr;

}

void push_back(int*& arr, int& size, int value)
{
	int* tempArr = new int[++size];
	for (int i = 0; i < size-1 ; i++)
	{
		tempArr[i] = arr[i];
	}
	tempArr[size-1] = value;
	delete[] arr;
	arr = tempArr;
}

void printArray(int* arr, const int size)
{
	cout << "print array..." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n";
}

void delArray(int*& arr)
{
	cout << "link:" << arr << "\tdelete array..";
	delete[] arr;
	arr = nullptr;
	cout << "\tlink:" << arr << endl;
}

void delArray(int**& arr,const int rows)
{
	cout << "link:" << arr << "\tdelete array..";
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;
	cout << "\tlink:" << arr << endl;
}
