#include "Statistic.h"

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
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
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