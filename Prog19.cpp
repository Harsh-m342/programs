/*
	Name: Swapping NUmbers using pointers
	Copyright: 
	Author: Harsh  Mishra
	Date: 08/11/19 02:11
	Description: 
*/
#include<iostream>
using namespace std;
void swapnos (int *a, int *b) {
 
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
 
}
int main()
{
	int a,b;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter a value of b:"<<endl;
	cin>>b;
	swapnos(&a,&b);
	cout<<"The numbers after swapping: a "<<a<<" and b is "<<b;
	return 0;
}

