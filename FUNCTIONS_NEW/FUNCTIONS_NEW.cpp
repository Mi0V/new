#include "stdtfx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Sum.h"
#include "Avg.h"
#include "minValueIn.h"
#include "maxValueIn.h"
#include "shiftLeft.h"
#include "shiftRight.h"
#include "Sort.h"

void main()
{
	setlocale(LC_ALL, "rus");
	const int n = 10;
	int arr[n];
	int indent = 0;

	FillRand(arr, n);
	Print(arr, n);
	std::cout << "Сумма всех элемернтов массива равна: " << Sum(arr, n) << std::endl;
	std::cout << "Среднее арифметическое: " << Avg(arr, n) << std::endl;
	std::cout << "Минимальное значение: " << minValueIn(arr, n) << std::endl;
	std::cout << "Максимальное значение: " << maxValueIn(arr, n) << std::endl;
	/*Sort(arr, n);
	Print(arr, n);
	std::cout << "Введите кол-во сдвигов: "; std::cin >> indent;
	shiftLeft(arr, n, indent);
	Print(arr, n);
	std::cout << "Введите кол-во сдвигов: "; std::cin >> indent;
	shiftRight(arr, n, indent);
	Print(arr, n);*/
	
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	const int ROWS = 3;
	const int COLS = 4;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS );
	Print(i_arr_2, ROWS, COLS);
}
