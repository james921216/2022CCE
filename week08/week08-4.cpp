#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){///(1)芅琜(加糷)
        ///(3)催计 +加糷琌n=n-i
        for(int k=1;k<=n-i;k++)printf(" ");
        ///(2)加糷,籔琍琍计秖妓
        for(int k=1;k<=i;k++)printf("*");
        ///printf("$\n", i);///(1)芅琜(加糷)
        printf("\n");
    }
}

