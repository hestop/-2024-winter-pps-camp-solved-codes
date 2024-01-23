#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    stack<int> s;

    while (N--) 
    {
        string command;
        cin >> command;

        if (command == "push") 
        {
            int X;
            cin >> X;
            s.push(X);
        } 
        else if (command == "pop") 
        {
            if (!s.empty()) 
            {
                cout << s.top() << endl;
                s.pop();
            } 
            else 
            {
                cout << -1 << endl;
            }
        }
        else if (command == "size") 
        {
            cout << s.size() << endl;
        } 
        else if (command == "empty") 
        {
            cout << (s.empty() ? 1 : 0) << endl;
        } 
        else if (command == "top") 
        {
            if (!s.empty()) 
            {
                cout << s.top() << endl;
            } 
            else 
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
