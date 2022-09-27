
/*******************************************************************************************
 Problem Statement:Write a C Program to implement Quick Sort using function , Merge Sort using function  and Matrix Multiplication using function pointer (use switch case)
*******************************************************************************************/



#include <stdio.h>

void instrut()
{
	printf("\t\t\twelcome to TRI-FUNCTIONAL SPACE\n\n");
	printf("you got 3 choices for what you wanna do\n");
	printf("enter the choice code written left to the permitted action\n");
	printf("1. Quick sort for sorting array\n2. Merge sort for sorting array\n3. Matrix multiplication\n");
	printf("4. want to known motive of function\n\n\n");

}
void motive()
{
	printf("\n\nQUICKSORT:-\n\tyou can use this function to arrange a array of numbers in descending or ascending order\nits working is diffrent hear pivot is decided and then with respect to it numbers are ordered\n\n");

	printf("MERGE SORT:-\n\tsimiler to quicksort it is also used arrange the numbers of array in ascending order or descending order\nworking follows as repeatedly divides the array into two halves until we reach a stage where we try to perform MergeSort\n\n");

	printf("MULTIPLICATION OF MATRIX:-\n\thear you can multyply 2matrices in a similar way");
	printf("");

}

//swapping elements hear
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

//finding partition of elements
int partition(int array[], int l, int h) {


  int lael= array[h];


  int i = (l - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = l; j < h; j++) {
    if (array[j] <= lael) {


      i++;


      swap(&array[i], &array[j]);
    }
  }


  swap(&array[i + 1], &array[h]);


  return (i + 1);
}

void quickSort(int array[], int l, int h) {
  if (l < h) {


    int pi = partition(array, l, h);


    quickSort(array, l, pi - 1);

    quickSort(array, pi + 1, h);
  }
}



// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {

  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);


  }
}

// Print the array
void prifun(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}




void matmult(int i,int j,int e,int f)
{
	int a,b,c,d,n,m,o,p,q,r,k,x,y;


	//printf("%dp%d",i,j);
	int matix1[i][j];
	printf("\n1st matrix\n");
	for(a=0;a<i;a++)
	{
		for(b=0;b<j;b++)
		{
			printf("enter the %dx%d element :- ",a+1,b+1);
			scanf("%d",&matix1[a][b]);
		}
	}




	int matix2[e][f];
	printf("\n2nd matrix\n");
	for(c=0;c<e;c++)
	{
		for(d=0;d<f;d++)
		{
			printf("enter the %dx%d element:- ",c+1,d+1);
			scanf("%d",&matix2[c][d]);
		}
	}


	//matix3_setup
	m=i,n=f;
	int matix3[m][n];
	for(o=0;o<m;o++)
	{
		for(p=0;p<n;p++)
		{
			matix3[o][p]=0;
		}
	}

	//multypying_point

	for(q=0;q<m;q++)
	{
		for(r=0;r<n;r++)
		{
			for(k=0;k<j;k++)
			{
				matix3[q][r]+=matix1[q][k]*matix2[k][r];
			}
		}
	}
	printf("\n");

	//printig_point
	for(x=0;x<m;x++)
	{
		for(y=0;y<n;y++)
		{
			printf("%d\t",matix3[x][y]);
		}
		printf("\n");
		}




}

int main()
{
	int a,b,c,d,i,j,e,f;

	instrut();

	ipt:
	{
		printf("your choice ==> ");
		scanf("%d\n",&a);
	}

	if(a>4 || a<=0)
	{
		printf("\nenter the permited value i.e. 1 to 4\n\n");
		goto ipt;
	}

	else
	{
		switch(a)
		{
			case 1:
			{
				//quicksort_part
				printf("enter the number of elements to be sorted:- ");
				scanf("%d\n",&c);

				int qks[c];

				for(b=0;b<c;b++)
				{
					printf("enter the %d element :- ",(b+1));
					scanf("%d\n",&qks[b]);
				}
				int n = sizeof(qks) / sizeof(qks[0]);

  printf("Unsorted Array\n");
  prifun(qks, n);

  // perform quicksort on data
  quickSort(qks, 0, n - 1);

  printf("Sorted array in ascending order: \n");
  prifun(qks, n);


				break;
			}

			case 2:
			{
				//mergesort_part
				printf("enter the number of elements to be sorted:- ");
				scanf("%d\n",&c);

				int mst[c];

				for(b=0;b<c;b++)
				{
					printf("enter the %d element :- ",(b+1));
					scanf("%d\n",&mst[b]);
				}
				printf("unsorted array follows as:-\n");
				prifun(mst, c);
				mergeSort(mst, 0, c);
				printf("sorted array follows as:-\n");
				prifun(mst, c);

				break;
			}

			case 3:
			{
				printf("enter the order of 1st matrix(ixj):-\n");
	scanf("%d",&i);
	printf("x\n");
	scanf("%d",&j);

	printf("\nenter the order of 2nd matrix(ixj):-\n");
	scanf("%d",&e);
	printf("x\n");
	scanf("%d",&f);
				void (*value)(int,int,int,int);

				value = matmult;
				if(j!=e)
				{
					printf("enter the values acording tu matrix multiplication rules\n\n");
					printf("");
				}
				else
				{
					value(i,j,e,f);
				}
				break;
			}

			case 4:
			{
				motive();
				break;
			}

			default:
			{
				printf("\nplz enter a value to proceed\n");
				break;
			}
		}
	}



	return 0;
}


