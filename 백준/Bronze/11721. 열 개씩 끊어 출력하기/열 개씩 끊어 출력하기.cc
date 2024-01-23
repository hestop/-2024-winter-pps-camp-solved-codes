#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    for (int i = 0; i < word.length(); i += 10) 
    {
        cout << word.substr(i, 10) << endl;
    }

    return 0;
}
