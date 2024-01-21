#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int answer = 0;
    /*
    반복문 skill_trees_len 보다 작은 동안
        const char* skill_tree 는 i번째 스킬트리 
        int num = 0;
        bool possible = true;
        
        반복문 skill_tree 길이보다 작은 동안
            만약 skill_tree의 j번째 글자가 skill에 포함된다면,
                만약 skill의 num번째 글자가 skill_tree의 j번째 글자라면, num++;
                아니라면 possible = false   break;
                
        만약 possible이 true 라면, answer++:
    */
    for(size_t i = 0; i < skill_trees_len; i++)
    {
        const char* skill_tree = skill_trees[i];
        int num = 0;
        bool possible = true;
        
        for(size_t j = 0; j < strlen(skill_tree); j++)
        {
            if(strchr(skill, skill_tree[j]) != NULL)
            {
                if(skill[num] == skill_tree[j]) num++;
                else
                {
                    possible = false;
                    break;
                }
            }
        }
        if(possible == true) answer++;
    }
        
    return answer;
}