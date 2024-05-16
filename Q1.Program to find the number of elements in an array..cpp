//Q1. Program to find the number of elements in an array.

#include<stdio.h>

int main()
{
	//Initize an array.
	int arr[] = {1,2,3,4,5,6,7,8};
	
	//Calculation of length of the array. [Time Complexity - O(1)]
	int length = sizeof(arr)/sizeof(arr[0]);
	
	//Printing the length of the array
	printf("Number of elements present in the array : %d",length);
	
	return 0;
}
