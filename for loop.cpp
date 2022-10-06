//program to highlight natural number and total sum
#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,k,m;
	cout<<"enter the starting point"<<endl;
	cin>>k;
	cout<<"enter the end point"<<endl;
	cin>>m;
	for(i=k;i<m;i++)
	{
		sum +=i;
		cout <<i<<endl;
	}
	cout<<sum;
	return 0;
}