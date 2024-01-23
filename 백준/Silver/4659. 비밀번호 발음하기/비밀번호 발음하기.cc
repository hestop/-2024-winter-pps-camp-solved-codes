#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char c) 
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool isAcceptable(const string& password) 
{
    int vowelCount = 0;
    int consecutiveVowel = 0;
    int consecutiveConsonant = 0;

    for (int i = 0; i < password.length(); ++i) 
    {
        char currentChar = tolower(password[i]);

        if (isVowel(currentChar)) 
        {
            vowelCount++;
            consecutiveVowel++;
            consecutiveConsonant = 0;
        } 
        else 
        {
            consecutiveConsonant++;
            consecutiveVowel = 0;
        }

        if (i > 0 && password[i] == password[i - 1] && password[i] != 'e' && password[i] != 'o') 
        {
            return false;
        }

        if (consecutiveVowel >= 3 || consecutiveConsonant >= 3) 
        {
            return false;
        }
    }

    return vowelCount >= 1;
}

int main() {
    while (true) 
    {
        string password;
        cin >> password;

        if (password == "end") 
        {
            break;
        }

        cout << "<" << password << "> is " << (isAcceptable(password) ? "acceptable." : "not acceptable.") << endl;
    }

    return 0;
}
