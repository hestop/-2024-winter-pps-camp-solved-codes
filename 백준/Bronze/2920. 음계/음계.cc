#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void solution(int input[]){
    int asc[8] = {1,2,3,4,5,6,7,8};
    int des[8] = {8,7,6,5,4,3,2,1};
    if(std::equal(input, input+8, asc)) cout<<"ascending"<<endl;
    else if(std::equal(input, input+8, des)) cout<<"descending"<<endl;
    else cout<<"mixed"<<endl;
}

int main() {
    int music[8];
    for(int i=0;i<8;i++)
    {
        cin>>music[i];
    }
    solution(music);

    return 0;
}