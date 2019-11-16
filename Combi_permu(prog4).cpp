/*
	Name: to find combination and permutation of n and r
	Copyright: 
	Author: Harsh Mishra
	Date: 06/11/19 22:18
	Description: 
*/
#include<iostream>
using namespace std;
int combi(int,int);
int permu(int,int);
int main(){
	
	int n,r,ch;
	cout<<"This program finds combination and permutation of two numbers";
	cout<<"\nEnter n:";
	cin>>n;
	cout<<"\nEnter r:";
	cin>>r;
	cout<<"\nChoose what to find:"
	<<"\n1.Combination"
	<<"\n2.Permutation"<<endl;
	cin>>ch;
	switch(ch){
		case 1:cout<<"\nThe combination of the numbers is:"<<combi(n,r);break;
		case 2:cout<<"\nThe permutation of numbers is:"<<permu(n,r);break;
		default:cerr<<"\aError!!Wrong input!!!";
	}
	return 0;
	
}
int fact(int num){
	 if(num==1) 
        {
              return 1;
        }
    else 
        {
             return num * fact(num-1);
        }
}
int combi(int x,int y){
	int result;
	result=fact(x)/(fact(y)*fact(x-y));
	return result;
}
int permu(int x,int y){
	int result;
	result=fact(x)/(fact(x-y));
	return result;
}
