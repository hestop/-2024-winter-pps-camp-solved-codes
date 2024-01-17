#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    int multiple;
    multiple = num1 * num2 * num3;
    int count[10] = {0};
    while(multiple != 0){
        int left = multiple%10;
        count[left]++;
        multiple /= 10;
    }
    for(int i=0;i<10;i++)
    {
        cout<<count[i]<<endl;
    }
}