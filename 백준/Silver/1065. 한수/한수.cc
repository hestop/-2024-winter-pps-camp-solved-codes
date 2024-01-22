#include <iostream>

using namespace std;

bool isHanNumber(int num) {
    if (num < 100) 
    {
        return true;
    } 
    else 
    {
        int d = (num % 10) - ((num / 10) % 10);
        num /= 10;

        while (num >= 10) 
        {
            int new_d = (num % 10) - ((num / 10) % 10);
            
            if (new_d != d) 
            {
                return false;
            }

            num /= 10;
        }
        return true;
    }
}

int main() {
    int N;
    cin >> N;

    int count = 0;

    for (int i = 1; i <= N; ++i) 
    {
        if (isHanNumber(i)) 
        {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}
