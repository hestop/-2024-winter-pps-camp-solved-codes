#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int sum[5] = {0};
    int temp;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>temp;
            sum[i] += temp;
        }
    }

    int max = 0;
    int max_index;
    for(int i=0;i<5;i++)
    {
        if(sum[i]>=max)
        {
            max = sum[i];
            max_index = i+1;
        }
    }

    cout<<max_index<<" "<<max<<endl;
}