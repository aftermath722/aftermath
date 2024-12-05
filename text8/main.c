#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    char stuid[10],name[20];
    float score;
    FILE*outfile,*infile;
    int i;
    outfile=fopen("scores.txt","w");
    if (outfile==NULL){
        printf("不能创建文件!");
        exit(0);
    }
    fprintf(outfile,"学号\t姓名\t入学成绩\n");
    for (i=0;i<N;i++){
        printf("请输入学生学号、姓名和入学成绩（空格分开）:");
        scanf("%s%s%f",stuid,name,&score);
        fprintf(outfile,"%s\t%s\t%f\n",stuid,name,score);
    }
    infile=fopen("scores.txt","r");
    if (infile==NULL)
        printf("不能打开文件!");
    fclose(outfile);
    return 0;
}
