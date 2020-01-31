#include<stdio.h>
#define MAX 5


int i, n;
int arr[];

int main()
{
    printf("Enter the number of element in array\n");
    scanf("%d", &n);
    printf("Enter the elements of the Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr,n);
    printf("The sorted array is \n");
    for (i=0; i < n; i++) 
       { printf("%d ", arr[i]); 
       }
    printf("\n"); 
}


void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
   
    for (i = 0; i < n-1; i++) 
    { 
         
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
       
        swap(&arr[min_idx], &arr[i]); 
    } 
} 



void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
