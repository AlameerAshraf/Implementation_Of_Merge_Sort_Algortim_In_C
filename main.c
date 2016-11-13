#include <stdlib.h>
#include <stdio.h>
#include "functions.c"


int main() {

	int A[] = {1,2,3,5,8,9,4,8};
	int i,ElmentsNo;
	ElmentsNo = sizeof(A)/sizeof(A[0]);
	MergeSort(A,ElmentsNo);

	printf("Here is your array sorted !\n");
	printf("\n");
	for(i = 0;i < ElmentsNo;i++)
	{
	    printf("%d \n",A[i]);
	}
	return 0;
}
