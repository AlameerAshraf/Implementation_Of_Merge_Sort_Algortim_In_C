void MergeSort(int *A,int n)
{
	int midElement,i, *L, *R;

	if(n < 2)
        return;
	midElement = n/2;


	L = (int*)malloc(midElement*sizeof(int));
	R = (int*)malloc((n- midElement)*sizeof(int));

	for(i = 0;i<midElement;i++)
    {
        L[i] = A[i];
    }
	for(i = midElement;i<n;i++)
    {
        R[i-midElement] = A[i];
    }

	MergeSort(L,midElement);
	MergeSort(R,n-midElement);
	Merging(A,L,R,midElement,n-midElement);

}


void Merging(int *A,int *L,int *R,int FirstArray,int SecondArray)
{

	int i,j,k = 0 ;

	while(i<FirstArray && j< SecondArray) {
		if(L[i]  < R[j])
		{
		    A[k] = L[i];
		    i++;
		    k++;
		}
		else
        {
             A[k] = R[j];
             j++;
             k++;
        }
	}
	while(i < FirstArray)
	{
	      A[k] = L[i];
	      i++;
	      k++;
	}
	while(j < SecondArray)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}
