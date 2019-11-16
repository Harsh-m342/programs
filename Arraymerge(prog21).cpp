/*
	Name: C++ program to merge two sorted arrays
	Author: Harsh Mishra
	Date: 09/11/19 12:57
	Description:This program merges two sorted arrays by passing arrays to mergearray function 
*/
 
#include<iostream> 
using namespace std; 
  
// Merge arr1[0..n1-1] and arr2[0..n2-1] into 
// arr3[0..n1+n2-1] 
void mergeArrays(int arr1[], int arr2[], int n1, 
                             int n2, int arr3[]) 
{ 
    int i = 0, j = 0, k = 0; 
  
    // Traverse both array 
    while (i<n1 && j <n2) 
    { 
        /* Check if current element of first 
         array is smaller than current element 
         of second array. If yes, store first 
         array element and increment first array 
         index. Otherwise do same with second array */
        if (arr1[i] < arr2[j]) 
            arr3[k++] = arr1[i++]; 
        else
            arr3[k++] = arr2[j++]; 
    } 
  
    // Store remaining elements of first array 
    while (i < n1) 
        arr3[k++] = arr1[i++]; 
  
    // Store remaining elements of second array 
    while (j < n2) 
        arr3[k++] = arr2[j++]; 
    cout << "Array after merging" <<endl; 
    for (int i=0; i < n1+n2; i++) 
        cout << arr3[i] << " "; 
} 
  
// Driver code 
int main() 
{ 
     
    int n1;
    cout<<"Enter the size of array 1:"<<endl;
    cin>>n1;
    int arr1[n1] = {};
    cout<<"Enter the elements of array 1;"<<endl;
    cout<<" "<<endl;
    for (int i=0;i<n1;i++)
    {
    	cout<<"Enter "<<i+1<<" element in array:"<<endl;
    	cin>>arr1[i];
	}
	cout<<"******************************************"<<endl;
    
  
     
    int n2;
    
    cout<<"Enter the size of array 2:"<<endl;
    cin>>n2;
    int arr2[n2] = {};
    cout<<"Enter the elements of array 2;"<<endl;
    cout<<" ";
    for (int j=0;j<n2;j++)
    {
    	cout<<"Enter "<<j+1<<" element in array:"<<endl;
    	cin>>arr2[j];
	}
    int arr3[n1+n2]; 
    mergeArrays(arr1, arr2, n1, n2, arr3); 
  
    
  
    return 0; 
} 
