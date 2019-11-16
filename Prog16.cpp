/*
	Name: CIRCLE CLASS
	Copyright: 
	Author: Harsh Mishra
	Date: 07/11/19 01:36
	Description: 
*/

#include<iostream>
using namespace std;

class Circle
{
 private:
        float radius;
        float area;
        float circum;
        void calcarea();
        void calcperi();
 public:
        void getdata();
        void putdata();
               
};

void Circle::getdata()  //Inputing the radius
{
    float r;
    r=radius;
    cout<<"\nInsert the radius of the circle\n";
    cin>>radius;
}

void Circle::putdata() //Displaying the data
{
    cout<<"\nAREA of the circle of radius "<<radius<<" units is: \n";
    calcarea();
    
    cout<<"\nPERIMETER of the circle of radius "<<radius<<" units is:\n ";
    calcperi();
}

void Circle::calcarea() //Calculating the area
{
    float t;
    t=3.14*radius*radius;
    cout<<t<<" sq. units"<<endl;
}

void Circle::calcperi() //Calculating the perimeter
{
    float t1;
    t1=2*3.14*radius;
    cout<<t1<<" units"<<endl;
}

int main()
{
    Circle c1;   //Creating object of class Circle
    c1.getdata();
    c1.putdata();
    return 0;
}
