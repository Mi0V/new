#include "shiftRight.h"
#include "shiftLeft.h"
void shiftRight(int arr[], const int n, int indent)
{
	shiftLeft(arr, n, n - indent);
}