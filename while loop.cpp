//program to highlight natural number and total sum
#include<iostream>
using namespace std;
int main()
{
	int sum=0,k,m;
	cout<<"enter the starting point"<<endl;
	cin>>k;
	cout<<"enter the end point"<<endl;
	cin>>m;
	while(k<m)
	{
		sum +=k;
		cout <<k<<endl;
		k++;
		
	}
	cout<<""<<sum;
	return 0;
}