#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[10]={"H\ne\nl\nl\no\n"};
    int i;
    FILE*outfile;
    outfile=fopen("word.txt","w");
    if (outfile==NULL){
        printf("���ܴ����ļ�!");
        exit(0);
    }
    for (i=0;ch[i]!='\0';i++)
        putchar(ch[i]);
    fprintf(outfile,"%s",ch);
    return 0;
}
