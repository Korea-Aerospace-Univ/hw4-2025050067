#include <stdio.h>

int main()
{
    int answer,guess,cnt=0; //answer,guess는 scanf로 입력받을거라 선언,cnt는 시도횟수 쓸거라서 바로 초기화
    scanf("%d",&answer); //정답 입력
    do{
        scanf("%d",&guess); //추측한 값 입력
        cnt++; // 추측(시도)했으니 시도 올림
        if(answer>guess) printf("%d<?\n",guess); 
        else if(answer<guess) printf("%d>?\n",guess);
        
    }while(answer!=guess); //정답 다를땐 돌고 정답일떈 탈출
    printf("%d==?\n",guess); //탈출했으니 정답 맞혔다는거
    printf("%d",cnt);

    return 0;
}
