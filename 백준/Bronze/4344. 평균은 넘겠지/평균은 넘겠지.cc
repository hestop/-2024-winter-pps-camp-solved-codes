#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++)
    {
        int student_num;
        cin>>student_num;
        vector <int> score;
        int score_sum = 0;
        for(int j=0;j<student_num;j++)
        {
            int input;
            cin>>input;
            score.push_back(input);
            score_sum += input;
        }
        //cout<<endl<<"score_sum: "<<score_sum<<endl;
        int average_score = score_sum / student_num;
        //cout<<endl<<"average_score: "<<average_score<<endl;
        int student_count = 0;
        for(int k=0;k<student_num;k++)
        {
            if(score[k]>average_score) student_count++;
        }
        //cout<<endl<<"student_count: "<<student_count<<endl;
        float percent;
        percent = ((double)student_count*100)/(double)student_num;
        cout << fixed;
        cout.precision(3);
        cout<<percent<<"%"<<endl;
    }

    return 0;
}