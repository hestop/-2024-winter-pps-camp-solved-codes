#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> players(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> players[i];
    }

    vector<char> firstLetters;

    for (const string& player : players) 
    {
        if (player.length() > 0) 
        {
            firstLetters.push_back(player[0]);
        }
    }

    sort(firstLetters.begin(), firstLetters.end());

    set<char> resultSet;
    int count = 1;

    for (int i = 1; i < firstLetters.size(); ++i) 
    {
        if (firstLetters[i] == firstLetters[i - 1]) 
        {
            count++;
        } 
        else 
        {
            count = 1;
        }

        if (count >= 5) 
        {
            resultSet.insert(firstLetters[i]);
        }
    }

    if (resultSet.empty()) 
    {
        cout << "PREDAJA" << endl;
    } 
    else 
    {
        for (char c : resultSet) 
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
