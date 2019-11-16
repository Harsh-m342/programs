/*
	Name: compute the sum of series
	Copyright: 
	Author: Harsh MIshra
	Date: 06/11/19 21:44
	Description: 
*/
#include<iostream>
using namespace std;
float sum1(int);
float sum2(int);
int sum3(int);
int main(){
	int n;
	int ch;
	cout<<"Which series sum you want?\n"
	    <<"\n1.S=1 + 1/2 + 1/3 + 1/4 + ....."
	    <<"\n2.S=1 + 1/2! + 1/3! + 1/4! + ....."
	    <<"\n3.S=1 -2 + 3 -4 ....."<<endl;
	cin>>ch;
	cout<<"Enter the number of terms:"<<endl;
	cin>>n;
	switch(ch)
	{
		case 1:cout<<"\nThe sum is:"<<sum1(n);break;
		case 2:cout<<"\nThe sum is:"<<sum2(n);break;
		case 3:cout<<"\nThe sum is:"<<sum3(n);break;
		default:cout<<"\nError!! Wrong input!!!";
	}
	return 0;
}
iint fact(int num){
	 if(num==1) 
        {
              return 1;
        }
    else 
        {
             return num * fact(num-1);
        }
}

float sum1(int x){
	float sum=0.0;
	for (int i=1;i<=x;i++){
		sum=sum+(1.0/i);
		
	}
	return sum;
}
float sum2(int x){
	float sum=0.0;
	for (int i=1;i<=x;i++){
		sum=sum+(1.0/fact(i));
		
	}
	return sum;
}
int sum3(int x){
	int sum=0;
	for (int i=1;i<=x;i++){
	    if(i%2==0){
		     sum=sum-i;
	    }   
	    else
	         sum=sum+i;
    }
	return sum;
}

