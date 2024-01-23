#include <iostream>
#include <string>

using namespace std;

int main() {
    string caesarWord;
    cin >> caesarWord;

    for (char& ch : caesarWord) 
    {
        ch = (ch - 'A' + 23) % 26 + 'A';
    }

    cout << caesarWord << endl;

    return 0;
}
