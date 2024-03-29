// CPP program to find variance 
// and standard deviation of  
// given array. 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function for calculating variance 
int variance(int a[], int n) 
{ 
    // Compute mean (average of elements) 
    int sum = 0; 
    for (int i = 0; i < n; i++) 
        sum += a[i]; 
    double mean = (double)sum /  
                  (double)n; 
  
    // Compute sum squared  
    // differences with mean. 
    double sqDiff = 0; 
    for (int i = 0; i < n; i++)  
        sqDiff += (a[i] - mean) *  
                  (a[i] - mean); 
    return sqDiff / n; 
} 
  
double standardDeviation(int arr[],  
                         int n) 
{ 
    return sqrt(variance(arr, n)); 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = {600, 470, 170, 430, 300}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Variance: "
         << variance(arr, n) << "\n"; 
    cout << "Standard Deviation: "
         << standardDeviation(arr, n) << "\n"; 
    return 0; 
} 
