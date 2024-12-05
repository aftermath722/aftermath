#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*infile,*outfile;
    infile=fopen("scores.txt","r");
    fclose(infile);
    return 0;
}
