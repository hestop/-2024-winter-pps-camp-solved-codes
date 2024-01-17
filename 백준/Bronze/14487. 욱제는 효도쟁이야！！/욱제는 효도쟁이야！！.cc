#include <iostream>
#include <string>

using namespace std;

int main() {
    int count;
    cin>>count;
    int max = 0;
    int sum = 0;
    for(int i=0;i<count;i++)
    {
        int temp;
        cin>>temp;
        sum += temp;
        if(temp>=max) max = temp;
    }
    sum -= max;
    cout<<sum<<endl;

    return 0;
}