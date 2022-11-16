//program to print elements of three-dimensional
//array
#include<iostream>
using namespace std;
int main(){
    //initializing the 3- dimensional

    int x[2][3][3]={{{0,1,2},{3,4,5},{6,7,8} },
        {{9,10,11},{12,13,14},{15,16,17}}};

// output each element's value
for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            for (int k=0;k<3;k++){
                    cout<< "element at x["<<i<<"]["<<
                    j<<"]["<<k<<"]="<<x[i][j][k]<<endl;
            }
        }
}
return 0;

        }
