#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;

    vector<int> count(26, 0);

    for (char ch : word) 
    {
        if (isalpha(ch)) 
        {
            ch = toupper(ch);
            count[ch - 'A']++;
        }
    }

    int maxCount = *max_element(count.begin(), count.end());
    char result = '?';

    for (int i = 0; i < 26; ++i) 
    {
        if (count[i] == maxCount) 
        {
            if (result == '?') 
            {
                result = 'A' + i;
            } 
            else 
            {
                result = '?';
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}
