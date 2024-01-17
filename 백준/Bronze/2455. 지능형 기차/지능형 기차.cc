#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int p_count = 0;
    int max = 0;
    int in;
    int out;
    for(int i=0;i<4;i++)
    {
        cin>>out;
        cin>>in;
        p_count -= out;
        p_count += in;
        if(p_count>=max) max = p_count;
    }
    cout<<max<<endl;

    return 0;
}