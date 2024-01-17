#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int room_num;
    int num_count[10] = {0};
    cin>>room_num;

    //cout << endl << "room_num: " << room_num << endl;

    while(room_num != 0){
        int left = room_num%10;
        num_count[left]++;
        room_num /= 10;
    }
    int max = 0;
    int last_max=0;
    int max_index=0;
    for(int i=0; i<10; i++)
    {
        if(num_count[i]>=max)
        {
            last_max = max;
            max = num_count[i];
            max_index = i;
        }
    }
    //cout << endl << "max: " << max << endl;
    //cout << endl << "max_index: " << max_index << endl;
    int num_set;
    if (max_index == 6 || max_index == 9) {
        num_set = (num_count[6] + num_count[9] + 1) / 2;
    } else {
        num_set = max;
    }
    //cout << endl << "last_max: " << last_max << endl;
    if(last_max>num_set) num_set = last_max;
    cout << num_set <<endl;
    return 0;
}