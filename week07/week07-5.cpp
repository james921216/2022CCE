#include <stdio.h>
#include <algorithm>

int main()
{
    int a[10]={9,8,6,1,2,3,5,4,0,7};
    std::sort(a,a+10);

    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }
}
