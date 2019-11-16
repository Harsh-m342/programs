/*
	Name: Reversing a number
	Copyright: 
	Author:Harsh Mishra 
	Date: 06/11/19 21:20
	Description: 
*/
#include<iostream>
using namespace std;
int reverse(int);
int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	cout<<"Number before reversing is:"<<n;
	cout<<"\nNumber after reversing is:"<<reverse(n);
	return 0;
}
int reverse(int x)
{
	int revnum=0;
	while(x>0)
	{
		revnum=revnum*10+(x%10);
		x=x/10;
	}
	return revnum;
}

