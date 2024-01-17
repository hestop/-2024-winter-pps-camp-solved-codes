#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector <int> id;
    for(int i=0;i<5;i++)
    {
        int temp;
        cin>>temp;
        id.push_back(temp);
    }
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum+=(id[i]*id[i]);
    }
    sum%=10;
    cout<<sum<<endl;

    return 0;
}