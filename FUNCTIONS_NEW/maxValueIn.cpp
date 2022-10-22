#include "maxValueIn.h"
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