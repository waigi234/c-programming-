// program to convert degrees farenheit to degrees celsius and viceversa 
#include<iostream>
using namespace std;
float conversion(float degrees,char units); //function prototype
int main ()
{
float degrees;
char units;
float answer; 
cout<<"Enter the degrees."<<endl;
cin>>degrees;
cout<<"Enter 'c' if the degrees are in Celsius and 'f' if the degrees are in Farenheit"<<endl;
cin>>units;
answer=conversion(degrees,units);//function calling
return 0;}
float conversion(float degrees,char units)// fuction definition
{
	float answer;
	if(units=='c'){  //conversion of celsius to farenheit
		answer=((degrees*1.8)+32);
		cout<<degrees<<" Degrees Celsius"<<" converted to Degrees Farenheit is "<<answer<<endl;}
    else if(units=='f')
		{
	answer=((degrees-32)*5/9);// conversion of farenheit to celsius
	cout<<degrees<<" Degrees Farenheit "<<" converted to Degrees Celsius is "<<answer<<endl;}
	else if(units !='c' and units !='f'){
		cout<<"The entered units are unknown."<<endl;}
		return answer;}




