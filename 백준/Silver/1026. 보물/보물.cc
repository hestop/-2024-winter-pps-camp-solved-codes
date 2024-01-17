#include <string>
#include <list>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int count;
    cin>>count;
    list<int> a;
    list<int> b;
    int temp;

    for(int i=0;i<count;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<count;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    a.sort();
    b.sort();
    b.reverse();

    list<int>::iterator p1;
    p1 = a.begin();
    list<int>::iterator p2;
    p2 = b.begin();

    int sum =0;
    for(int i=0;i<count;i++)
    {
        sum += ((*p1) * (*p2));
        p1++;
        p2++;
    }
    cout<<sum<<endl;


    return 0;
}