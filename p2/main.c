#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);
    getchar(); //밑에 char를 입력받기에 엔터키를 먹어줌

    int eng_cnt = 0, max_eng = 0; //현재 영어 연속 횟수,  영어 연속횟수 최대값
    int num_cnt = 0, max_num = 0; 
    char c;
    for (int i = 0; i < N; i++) {
        
        scanf("%c", &c); //문자 하나씩 받음

        if (c >= 'a' && c <= 'z') { //영소문자에 포함될떄
            eng_cnt++; //영어연속횟수 올려줌
            num_cnt = 0; //영문자가 나왔단건 숫자 연속은 끝난 거라 다시 0으로 초기화
        } else { 
            num_cnt++; //위와 동일
            eng_cnt = 0;
        }

        if (eng_cnt > max_eng) max_eng = eng_cnt; //매 for문마다 최대값 넘을시 최대값 갱신해줌 (for문 끝나고 하면 for문마다 현재 연속 횟수값이  초기화될 우려)
        if (num_cnt > max_num) max_num = num_cnt;
    }

    printf("%d\n", max_eng);
    printf("%d", max_num);

    return 0;
}
