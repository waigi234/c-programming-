//creating class addition for sum and product
#include<iostream>
using namespace std;
class addition{
    public:
    int a=22;
    int b=30;
    int c=50;
    int product(){ // member function
    return(a*b*c);}
    int sum(){
        return(a+b+c);}
};
int main(){
    addition time;//creating object of the room
    int product,sum;
    product=time.product();//calling of member of the base function
    sum=time.sum();
    cout<<"the product is "<<product<<endl;
    cout<<"the sum is "<<sum<<endl;
    return 0;}
