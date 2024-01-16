#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int length = 0;
    while(s[length] != '\0'){
        length ++;
    }
    if(length!=4 && length!=6){
     return false;   
    }
    
    for(int i = 0; i<length; i++){
        if(!isdigit(s[i])){
            return false;   
        }
    }
    return answer;
}