#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.length();
    
    for (int i = 1; i < s.length(); i++) {
        int ans = s.length();
        int size = i;
        
        vector<string> splited;
        int count = 0;
        
        for (int j = 0; j < s.length(); j += size) {
            count++;
            string temp;
            temp = s.substr(j, size);
            splited.push_back(temp);
        }
        
        string prev = splited[0];
        int com_try = 1;
        
        for (int k = 1; k < count; k++) {
            if (prev == splited[k]) {
                ans -= size;
                com_try++;
            } else {
                if (com_try > 1) {
                    ans += to_string(com_try).length();
                }
                prev = splited[k];
                com_try = 1;
            }
        }
        
        if (com_try > 1) {
            ans += to_string(com_try).length();
        }
        
        if (ans <= answer) answer = ans;
    }
    
    return answer;
}
