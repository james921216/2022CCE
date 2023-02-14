#include <stdio.h> ///倒過來印陣列
int main()
{
    int a[4]={10,20,30,40};

    for(int i=0;i<4;i++){  ///i:0123因為<4
        printf("%d ",a[i]);
    }

    for(int i=3;i>=0;i--){
            printf("%d ",a[i]);
    }
}
