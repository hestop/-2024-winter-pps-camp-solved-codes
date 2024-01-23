#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) 
    {
        string result;
        cin >> result;

        int score = 0;
        int consecutive = 0;

        for (char ch : result) 
        {
            if (ch == 'O') 
            {
                consecutive++;
                score += consecutive;
            } 
            else 
            {
                consecutive = 0;
            }
        }

        cout << score << endl;
    }

    return 0;
}
