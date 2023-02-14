#include <stdio.h>
int sum(int a,int b);///先宣告declare

int main()
{
    ///在 之前，要先宣告declare或定義define
    int ans = sum(2,3);///使用 呼叫
    printf("ans: %d\n",ans);
}
int sum(int a,int b)
{
    return a+b;
}///回傳 回覆人家
