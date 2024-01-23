#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* number, int k) 
{
    int len = strlen(number);
    int result_len = len - k;
    char* answer = (char*)malloc(result_len + 1);
    
    int idx = 0;
    for (int i=0;i<len;i++) 
    {
        while (idx>0 && answer[idx-1]<number[i] && k>0) 
        {
            idx--;
            k--;
        }
        answer[idx++] = number[i];
    }
    while (k>0) 
    {
        idx--;
        k--;
    }
    answer[idx] = '\0';

    return answer;
}
