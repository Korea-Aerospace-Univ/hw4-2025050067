#include <stdio.h>

int main()
{
    int answer,guess,cnt=0;
    scanf("%d",&answer);
    do{
        scanf("%d",&guess);
        cnt++;
        if(answer>guess) printf("%d<?",guess);
        else if(answer<guess) printf("%d>?",guess);
        else {
        printf("%d==?\n",guess);
        printf("%d",cnt);
        } 
    }while(answer!=guess);

    return 0;
}
