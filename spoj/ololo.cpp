#include <stdio.h>

int main()
{
    int N, input, flag = 0, ans = 0;
    scanf ("%d",&N);
    scanf ("%d",&ans);
    N--;
    while(N--)
    {
        scanf ("%d",&input);
        ans = ans^input;
    }
    printf("%d\n", ans);
}