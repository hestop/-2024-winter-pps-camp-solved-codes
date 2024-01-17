#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    string zeros = "";
    vector<int> res;
    int carry = 0;

    int lenA = A.size();
    int lenB = B.size();
    int size_diff = lenA - lenB;
    if (size_diff < 0)
        size_diff *= -1;
    for (int i = 0; i < size_diff; i++)
        zeros += "0";
    if (lenA < lenB)
        A = zeros + A;
    else if (lenA > lenB)
        B = zeros + B;

    int n1, n2;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        n1 = A[i] - '0';
        n2 = B[i] - '0';

        if ((n1 + n2) % 10 + carry == 10)
        {
            carry = 1;
            res.push_back(0);
        }
        else
        {
            res.push_back((n1 + n2) % 10 + carry);
            carry = (n1 + n2) / 10;
        }
    }
    if (carry != 0)
        res.push_back(carry);
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
    cout << endl;

    return 0;
}