// C Program to calculate size of an array using sizeof()
// operator
#include <stdio.h>
int main()
{
int Arr[] = { 1, 2, 3, 4, 5 };
// variable to store size of Arr
	int length = sizeof(Arr) / sizeof(Arr[0]);
printf("The length of the array is: %d\n", length);
return 0;
}
