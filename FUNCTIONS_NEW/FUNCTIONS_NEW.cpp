#pragma warning(disable:4326)
#include <iostream>

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Print(T arr[], const int n);
template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
int Sum(T arr[], const int n);
template <typename T>
int Sum(T arr[ROWS][COLS], const int n);

template <typename T>
double Avg(T arr[], const int n);
template <typename T>
double Avg(T arr[ROWS][COLS], const int n);

template <typename T>
int minValueIn(T arr[], const int n);
template <typename T>
int minValueIn(T arr[ROWS][COLS], const int n);

template <typename T>
int maxValueIn(T arr[], const int n);
template <typename T>
int maxValueIn(T arr[ROWS][COLS], const int n);

template <typename T>
void shiftLeft(T arr[], const int n, int indent);
template <typename T>
void shiftRight(T arr[], const int n, int indent);
template <typename T>
void Sort(T arr[], const int n);
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

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%10000;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}

template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

template <typename T>
int Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T>
int Sum(T arr[ROWS][COLS], const int ROWS,const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template <typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T>
double Avg(int arr[ROWS][COLS], const int n)
{
	return (double)Sum(arr, n) / n;
}

template <typename T>
int minValueIn(T arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] < min) ? min = arr[i] : n;
		
	}
	return min;
}
template <typename T>
int minValueIn(T arr[ROWS][COLS], const int n)
{
	int min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			(arr[i][j] < min) ? min = arr[i][j] : n;

		}
	}
	return min;
}

template <typename T>
int maxValueIn(T arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] > max) ? max = arr[i] : n;

	}
	return max;
}
template <typename T>
int maxValueIn(T arr[ROWS][COLS], const int n)
{
	int max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			(arr[i][j] > max) ? max = arr[i][j] : n;

		}
	}
	return max;
}
template <typename T>
void shiftLeft(T arr[], const int n, int indent)
{
	for (int i = 0; i < indent; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}

}
template <typename T>
void shiftRight(T arr[], const int n, int indent)
{
	shiftLeft(arr, n, n - indent);
}
template <typename T>
void Sort(T arr[],const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = k == i? j+1:0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}


