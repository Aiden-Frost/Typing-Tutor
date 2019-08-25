#include<stdio.h>
#include<string.h>
#include<unistd.h>
void highscore()
{
    FILE *fp;
    char str[1000]="";
    fp = fopen("./files/score.csv","r");
    char *token;
    while (fgets(str,1000,fp)!=NULL)
    {
        token = strtok(str,",");
        printf("%s\t|\t",token);
        token = strtok(NULL, ",");
        printf("%s\t",token);
        printf("\n");
    }
fclose(fp);
rewind(fp);
sleep(3);
}