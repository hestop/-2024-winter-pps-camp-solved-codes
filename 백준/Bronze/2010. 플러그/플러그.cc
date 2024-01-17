#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int count ;
    int holes;
    cin>>count;
    int max_com = 1;
    for(int i=0;i<count;i++)
    {
        cin>>holes;
        max_com += holes;
        max_com--;
    }
    cout<<max_com<<endl;
    return 0;
}