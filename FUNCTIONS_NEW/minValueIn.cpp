#include "minValueIn.h"

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