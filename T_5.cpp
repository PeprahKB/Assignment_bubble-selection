#include <iostream>
using namespace std;

void swap(int *A, int *B)
{
   
   int C;
     C = *A;
     *A = *B;
     *B = C;
}
void SelSort(int arr[] , int n){
	
	int i, j, min_num;
	
	for(i=0; i<n-1; i++){
		min_num = i;
		
		for(j=i+1; j<n; j++){
			if (arr[j] < arr[min_num] )
 			min_num =j;
			
			swap( &arr[min_num] , &arr[i]);
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
	

    	int arr[] = {64, 25, 15, 12, 22, 11};
    	
    	int n = sizeof(arr) / sizeof(arr[0]);
    	SelSort(arr , n );
    	
    	cout<<"Sorted array : " <<endl;
    	PrintArray(arr , n);
    	
			return 0;
}
