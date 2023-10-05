#include <stdio.h>

double getAverage(int *arr, int size);

void main(void)
{
	int balance[5] = {2, 4, 6, 8, 10};
	double avg;

	avg = getAverage(balance, 5);
	printf("The average of balance is: %2.f\n", avg);
	
}

double getAverage(int *arr, int size)
{
	int i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	avg = (double)sum / size;

	return (avg);
}
