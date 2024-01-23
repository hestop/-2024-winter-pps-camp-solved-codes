#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int groupWordCount = 0;

    for (int i = 0; i < N; ++i) 
    {
        string word;
        cin >> word;

        vector<bool> visited(26, false);
        bool isGroupWord = true;

        for (int j = 0; j < word.length(); ++j) 
        {
            int index = word[j] - 'a';

            if (visited[index]) 
            {
                isGroupWord = false;
                break;
            }

            visited[index] = true;

            while (j + 1 < word.length() && word[j] == word[j + 1]) 
            {
                j++;
            }
        }

        if (isGroupWord) 
        {
            groupWordCount++;
        }
    }

    cout << groupWordCount << endl;

    return 0;
}
