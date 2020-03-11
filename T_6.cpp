#include <iostream>
using namespace std;

void swap(int *A, int *B)
{
   
   int C;
     C = *A;
     *A = *B;
     *B = C;
}
void bubbleSort(int arr[] , int n){
	
	int i, j; 
	
	for(i=0; i<n-1; i++){
		
		for(j=0; j<n-i-1; j++){
			if (arr[j] > arr[j+1] )
			
			swap( &arr[j] , &arr[j+1]);
		}
	}
	
}

void PrintArray(int arr[], int size)
{
	int i; 
	for(i=0; i<size; i++)
	{
	
	   cout<<arr[i] << " " ;
	   
    }
	   cout<<endl;
}
int main() {
	

    	int arr[] = {43, 9, 20, 12, 22, 66};
    	
    	int n = sizeof(arr) / sizeof(arr[0]);
    	bubbleSort(arr , n );
    	
    	cout<<"Sorted array : " <<endl;
    	PrintArray(arr , n);
    	
			return 0;
}
