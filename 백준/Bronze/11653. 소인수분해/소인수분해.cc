#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    vector <int> output;
    
    int input;
    cin>>input;
    int num = input;

    for(int i=2;i<=num;i++)
    {
        while (input%i==0)
        {
            input/=i;
            output.push_back(i);
        }
    }

    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}
