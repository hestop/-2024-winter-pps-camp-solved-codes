#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if(a>b) swap(a,b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {

    int count;
    cin >> count;
    for(int i=0;i<count;i++)
    {
        int num1, num2;
        cin >> num1 >> num2;
        int ans = lcm(num1, num2);
        cout<<ans<<endl;
    }
    return 0;
}