#include <stdio.h>
#include <string.h>///���ܦh�r��u�� stren() �r�����
int main()
{
    char c;
    char line[30];

    printf("�п�J�@�Ӧr��,���n�Ӫ�: ");
    scanf("%s",line );
    printf("�A��J:%s\n",line);

    int N=strlen(line);
    for(int i=0;i<N;i++){
            if(line[i]=='2'){
                printf("���2\n");
            }
    }
}
