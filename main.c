#include <stdlib.h>
#include <stdio.h>
#include "functions.c"


int main() {  

	int A[] = {14,7,3,12,9,11,6,2};
	int i,ElmentsNo;
	ElmentsNo = sizeof(A)/sizeof(A[0]);
	MergeSort(A,ElmentsNo);

	printf("Here is your array sorted !\n");
	printf("\n");
	for(i = 0;i < ElmentsNo;i++)
	{
	    printf("%d \n",A[i]);
	} 
	// alameer ashraf hassan 
	// alameer ashraf hassan 
	return 0;
}
