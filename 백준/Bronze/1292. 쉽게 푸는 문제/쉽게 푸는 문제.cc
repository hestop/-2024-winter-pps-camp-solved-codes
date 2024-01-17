#include <iostream>
#include <string>

using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int sum = 0;
    int count = 1;

    for (int i = 1; i <= end; ++count) {
        for (int j = 0; j < count && i <= end; ++j, ++i) {
            if (i >= start) {
                sum += count;
            }
        }
    }
    cout << sum << endl;

    return 0;
}
