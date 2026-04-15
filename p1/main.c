#include <stdio.h>

int main()
{
    int answer,guess,cnt=0;
    scanf("%d",&answer);
    do{
        cnt++;
        scanf("%d",&guess);
        if(answer>guess) printf("%d<?",guess);
        else if(answer==guess) {
        printf("%d==?\n",guess);
        printf("%d",answer);
        }
        else printf("%d>?",guess);
            
    }while(answer!=guess);

    return 0;
}
