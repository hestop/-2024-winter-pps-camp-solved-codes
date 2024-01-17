#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int count;
    cin>>count;
    int M_fee = 0;
    int Y_fee = 0;
    int seconds;
    for(int i=0;i<count;i++)
    {
        cin>>seconds;
        Y_fee += (((seconds/30)+1)*10);
        M_fee += (((seconds/60)+1)*15);
    }
    if(Y_fee<M_fee)
    {
        cout<<"Y "<<Y_fee<<endl;
    }
    else if(Y_fee>M_fee)
    {
        cout<<"M "<<M_fee<<endl;
    }
    else cout<<"Y M "<<M_fee<<endl;
}