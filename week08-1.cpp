#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);///�Q�ո�n�O���O���
    int bad=0;
    for(int i=2;i<n;i++){///�u��Q1�Mn�㰣
        if(n%i==0)bad=1;
    }
    if(bad==0)printf("%d �O���", n);
    else printf("%d ���O���", n);
}
