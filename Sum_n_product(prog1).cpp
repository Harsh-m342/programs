/*
	Name: Print the sum and product of digits of a number
	Copyright: 
	Author: harsh mishra
	Date: 06/11/19 21:12
	Description: 
*/

#include<iostream>
using namespace std;
int calcsumdig(int); //function protocol
int calcproduct(int); //function protocol
int main()
{
	int x;
	cout<<"Enter a number:";
	cin>>x;
	cout<<"\nThe sum of digits is:"<<calcsumdig(x);
	cout<<"\nThe product of digits is:"<<calcproduct(x);
	return 0;
}
int calcsumdig(int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=(n%10);
		n=n/10;
	}
	return sum;
}
int calcproduct(int n)
{
	int pro=1;
	while(n>0)
	{
		pro*=(n%10);
		n=n/10;
	}
	return pro;
}

