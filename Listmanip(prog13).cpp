/*
	Name:Array manipulation 
	Copyright: 
	Author: Harsh Mishra
	Date: 08/11/19 00:37
	Description: 
*/
#include<iostream>
using namespace std;
void printeve(int arr[],int n);
void printodd(int arr[],int n);
void sumnavg(int arr[],int n);
void maxnmin(int arr[],int n);
void removedupl(int arr[], int n);
void reversearr(int arr[],int n);
int main()
{
	const int size=50;
	int arr[size],n,ch;
	
    cout<<"Enter the number of elements in your list:";
    cin>>n;
    cout<<"Enter the elements;\n";
    for (int i=0;i<n;i++){
    	cout<<"Enter  "<<i+1<<"  element in your list:";
    	cin>>arr[i];
	}
	cout<<"Menu:\n"
	<<"1.Print even values\n"
	<<"2.Print odd values\n"
	<<"3.Print sum and average of elements\n"
	<<"4.Print the max and min value\n"
	<<"5.Remove the duplicates from array\n"
	<<"6.Store the array in reverse order\n"<<endl;
	cin>>ch;
	switch (ch){
		case 1:printeve(arr,n);break;
		case 2:printodd(arr,n);break;
		case 3:sumnavg(arr,n);break;
		case 4:maxnmin(arr,n);break;
		case 5:removedupl(arr,n);break;
		case 6:reversearr(arr,n);break;
		default:cerr<<"\aWrong input!!!";
	}
	return 0;
	
}
void printeve(int arr[],int n){
	for (int i=0;i<n;i++){
		cout<<"\nThe even values are:\n";
		if (arr[i]%2==0){
			cout<<arr[i];
			cout<<" ";
		}
	}
}
void printodd(int arr[],int n){
	cout<<"\nThe odd values:\n";
	for (int i=0;i<n;i++){
		if (arr[i]%2!=0){
			cout<<arr[i];
			cout<<" ";
		}
	}
}
void sumnavg(int arr[],int n){
	cout<<"\nThe sum of all elements is:";
	int sum=0;
	for (int i=0;i<n;i++){
		sum+=arr[i];
    }
    cout<<sum<<endl;
    cout<<"The average of the elements is:"<<float(sum/n)<<endl;
	
}
void maxnmin(int arr[],int n){
	int max=arr[0];
	for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max<<endl;
    cout << "Smallest element : " << min;
	
}
void removedupl(int arr[], int n)
{
    int j = 0;

    for (int i=0; i < n; i++){
        for( j=0;j<i;j++){

            if(arr[i]==arr[j]){
                n--;
                for (int k=i; k<n; k++){
                    arr[k]=arr[k+1];
                }
                i--;    
            }
        }
    }

    for(int m=0;m<n;m++){
    	cout<<arr[m];
    	cout<<" ";
	}
}
void reversearr(int arr[],int n){
    int i,j,temp; 
	j=n-1;  // now j will point to the last element
	i=0;   //  and i will be point to the first element
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"Now the Reverse of the Array is : \n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}




