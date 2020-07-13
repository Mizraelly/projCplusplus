#include <iostream>
#include "header.h"
#include <ctime>
#define ROWS 2 
#define COLS 3

using namespace std;
int main()
{
	srand(time(NULL));
	int SIZE = 4;
	int* arr = createArray(SIZE);
	fillArray(arr, SIZE);
	printArray(arr,SIZE);
	push_back(arr, SIZE, 8);
	printArray(arr, SIZE);
	delArray(arr);
	/*int** arrOne = createArray(ROWS, COLS);
	int** arrTwo = createArray(ROWS, COLS);
	printArray(arrOne, ROWS, COLS);
	printArray(arrTwo, ROWS, COLS);

	fillArray(arrOne, ROWS, COLS);
	copyArray(arrOne, arrTwo, ROWS, COLS);

	printArray(arrOne, ROWS, COLS);
	printArray(arrTwo, ROWS, COLS);

	cout << "link arrOne:" << arrOne << "\nlink arrTwo:" << arrTwo << endl;
	delArray(arrOne, ROWS);
	delArray(arrTwo, ROWS);
	cout << "link arrOne:" << arrOne << "\nlink arrTwo:" << arrTwo << endl;*/
	system("pause");

}

