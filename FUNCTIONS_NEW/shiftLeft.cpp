#include "shiftLeft.h"
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