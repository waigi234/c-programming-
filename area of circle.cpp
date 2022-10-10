// program to calculate the area of a circle
#include<iostream>
using namespace std;
float circle(float r); //function prototype
int main ()
{
float radius;
float area;
cout<<"enter the radius"<<endl;
cin>>radius;
area=circle(radius); //fuction calling
cout<<"the area is "<<area<<endl;
return 0;}
float circle(float r){ //funcion definition
float area;
area=3.142*r*r;
return area;}
