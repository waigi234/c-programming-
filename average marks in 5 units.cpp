// program to grade the average marks in 5 units
#include <iostream>
using namespace std;
int main()
{
Float math,eng,french,cre,sci;
Float avg;
cout<<"enter the marks of the 5 units"<<endl;
cin>>math>>eng>>french>>cre>>sci;
avg=(math+eng+french+sci+cre)/5;
Cout<<"the average is "<<avg;
if (avg>=70&&avg<=100)
{
    cout<<" grade A";
}
else if (avg>=60&&avg<=69)
{
    cout<<" grade B";
}
else if (avg>=50&&avg<=59)
{
    cout<<" grade C";
}
else if (avg>=40&&avg<=49)
{
    cout<<" grade D";
}
else{
    cout<<" grade E";
}
    return 0;
}
