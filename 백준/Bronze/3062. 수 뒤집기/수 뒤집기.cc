#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(int num) {
    string strNum = to_string(num);
    string reversedStr = strNum;
    reverse(reversedStr.begin(), reversedStr.end());
    
    return strNum == reversedStr;
}

int main() {
    int count;
    cin >> count;

    for (int i = 0; i < count; i++) {
        int input;
        cin >> input;
        string reverse_input = to_string(input);
        reverse(reverse_input.begin(), reverse_input.end());

        int sum = input + stoi(reverse_input);
        //cout<<sum<<endl;

        if (isPalindrome(sum)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
