#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int digit_sum = 0;
    int x_copy = x;
    while(x_copy != 0){
        int left = x_copy%10;
        digit_sum += left;
        x_copy /= 10;
    }
    if(x%digit_sum!=0) answer = false;
    return answer;
}