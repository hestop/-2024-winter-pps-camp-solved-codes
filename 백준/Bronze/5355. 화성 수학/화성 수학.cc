#include <iostream>
#include <string>

using namespace std;

int main() {
    int count;
    cin >> count;

    for (int i = 0; i < count; i++) {
        float num;
        cin >> num;
        char input;

        cin.ignore();

        while (1) {
            input = cin.get();
            if (input == '\n') break;

            if (input == '@') num *= 3;
            else if (input == '%') num += 5;
            else if (input == '#') num -= 7;
        }

        cout << fixed;
        cout.precision(2);
        cout << num << endl;
    }

    return 0;
}
