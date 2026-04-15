
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    

    int eng_cnt = 0, max_eng = 0;
    int num_cnt = 0, max_num = 0;

    for (int i = 0; i < N; i++) {
        char c;
        scanf("%c", &c);

        if (c >= 'a' && c <= 'z') {
            eng_cnt++;
            num_cnt = 0;
        } else { 
            num_cnt++;
            eng_cnt = 0;
        }

        if (eng_cnt > max_eng) max_eng = eng_cnt;
        if (num_cnt > max_num) max_num = num_cnt;
    }

    printf("%d\n", max_eng);
    printf("%d", max_num);

    return 0;
}
