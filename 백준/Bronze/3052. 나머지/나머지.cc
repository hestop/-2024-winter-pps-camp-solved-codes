#include <string>
#include <iostream>

using namespace std;

int main() {
    int left_count[42] = {0};
    int temp;
    for(int i = 0;i<10;i++)
    {
        cin>>temp;
        left_count[temp%42] ++;
    }

    int diff_count =0;
    for(int i = 0;i<42;i++)
    {
        if(left_count[i]!=0) diff_count ++;
    }
    cout<<diff_count<<endl;
}