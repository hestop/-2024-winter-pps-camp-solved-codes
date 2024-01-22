#include <string>
#include <iostream>


using namespace std;

int main() {
    int input;
    int change;
    cin>>input;
    change = 1000 - input;
    int count = 0;

    while(change>=0)
    {
        change-=500;
        count++;
    }
    change+=500;
    count--;

    while(change>=0)
    {
        change-=100;
        count++;
    }
    change+=100;
    count--;

    while(change>=0)
    {
        change-=50;
        count++;
    }
    change+=50;
    count--;
    
    while(change>=0)
    {
        change-=10;
        count++;
    }
    change+=10;
    count--;

    while(change>=0)
    {
        change-=5;
        count++;
    }
    change+=5;
    count--;

    while(change>=0)
    {
        change-=1;
        count++;
    }
    change+=1;
    count--;

    cout<<count<<endl;

    return 0;

}