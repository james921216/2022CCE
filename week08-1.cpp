#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);///想試試n是不是質數
    int bad=0;
    for(int i=2;i<n;i++){///只能被1和n整除
        if(n%i==0)bad=1;
    }
    if(bad==0)printf("%d 是質數", n);
    else printf("%d 不是質數", n);
}
