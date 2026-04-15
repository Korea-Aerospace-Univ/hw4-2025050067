#include <stdio.h>

int main()
{
    int N; int engCnt=0; int maxEngCnt=0; int numCnt=0;  int maxNumCnt=0;
    
    
    scanf("%d",&N);
    char str[N];
    scanf("%s",&str);
    for(int i=0;i<N;++i){
        char c=str[i];
        if(c>='a' && c<='z'){
            engCnt++;
            numCnt=0;
        }
        else{
            numCnt++;
            engCnt=0;
        }
        if(engCnt>maxEngCnt) maxEngCnt=engCnt;
        if(numCnt>maxNumCnt) maxNumCnt=numCnt;
    }
    printf("%d\n",maxEngCnt);
    printf("%d\n",maxNumCnt);
}
