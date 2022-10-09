#pragma warning(disable:4326)
#include <iostream>

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
int Sum(double arr[], const int n);
int Sum(float arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(float arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int n);

int minValueIn(int arr[], const int n);
int minValueIn(double arr[], const int n);
int minValueIn(float arr[], const int n);
int minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int n);

int maxValueIn(int arr[], const int n);
int maxValueIn(double arr[], const int n);
int maxValueIn(float arr[], const int n);
int maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int n);

void shiftLeft(int arr[], const int n, int indent);
void shiftRight(int arr[], const int n, int indent);
void Sort(int arr[], const int n);
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

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS,const int COLS)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] < min) ? min = arr[i] : n;
		
	}
	return min;
}
int minValueIn(double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] < min) ? min = arr[i] : n;
		
	}
	return min;
}
int minValueIn(float arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] < min) ? min = arr[i] : n;
		
	}
	return min;
}
int minValueIn(char arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] < min) ? min = arr[i] : n;
		
	}
	return min;
}
int minValueIn(int arr[ROWS][COLS], const int n)
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

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] > max) ? max = arr[i] : n;

	}
	return max;
}
int maxValueIn(double arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] > max) ? max = arr[i] : n;

	}
	return max;
}
int maxValueIn(float arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] > max) ? max = arr[i] : n;

	}
	return max;
}
int maxValueIn(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		(arr[i] > max) ? max = arr[i] : n;

	}
	return max;
}
int maxValueIn(int arr[ROWS][COLS], const int n)
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
void shiftLeft(int arr[], const int n, int indent)
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
void shiftRight(int arr[], const int n, int indent)
{
	shiftLeft(arr, n, n - indent);
}
void Sort(int arr[],const int n)
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
						arr[k][l] = buffer
					}
				}
			}
		}
	}
}


