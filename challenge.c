#include <stdio.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
void challenge()
{
    int start,end,total;
    FILE *fp;
    FILE *fa;
    fa = fopen("./files/score.csv","a+");
    char str[1000];
    int opt;
    char *filename;
    char *token;
    char name[20];
    float score;
    char stri[200];
    printf("Choose your level\n");
    printf("1.Easy\n");
    printf("2.Intermediate\n");
    printf("3.Expert\n");
    printf("Enter your option:");
    scanf("%d",&opt);
    printf("\n");
    printf("NOTE:The delimitter is tab\n\n");
    printf("Type the below text\n\n");
    switch (opt)
    {
        case 1:
        {
            filename = "./files/easy.txt";
            fp = fopen(filename,"r");
            int count = 0;
            char s[1000]="";
            char str1[100];
            fgets(str,500,fp);
            fgets(str1,500,fp);
            strcat(str,str1);
            printf(str);
            printf("\n\n");
            printf("Write the text\n\n");
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            start = tm.tm_hour*60*60+tm.tm_min*60+tm.tm_sec;
            scanf("%[^\t]s",s);
            time_t g = time(NULL);
            struct tm gm = *localtime(&g);
            end = gm.tm_hour*60*60+gm.tm_min*60+gm.tm_sec;
            total = end-start;
            for (int i = 0;i<strlen(s);i++)
                if (str[i]!=s[i+1])
                {
                    ++count;
                }
            float accuracy = ((strlen(s)-count)*100/strlen(s));
            float speed = (float)strlen(s)/((float)total/12);
            printf("Accuracy : %f\n",accuracy);
            printf("Speed : %f WPM\n",speed);
            printf("Enter details for the record\n");
            printf("Enter your user-name:");
            scanf("%s",name);
            score = accuracy*speed;
            fprintf(fa,"\n%s,%f",name,score);
            sleep(3);
            fclose(fa);
            fclose(fp);
            break;
        }
        case 2:
        {
            filename = "./files/intermediate.txt";
            fp = fopen(filename,"r");
            int count = 0;
            char s[1000]="";
            char str1[100];
            char str2[100];
            fgets(str,500,fp);
            fgets(str1,500,fp);
            fgets(str2,500,fp);
            strcat(str,str1);
            strcat(str,str2);
            printf(str);
            printf("\n\n");
            printf("Write the text\n\n");
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            start = tm.tm_hour*60*60+tm.tm_min*60+tm.tm_sec;
            scanf("%[^\t]s",s);
            time_t g = time(NULL);
            struct tm gm = *localtime(&g);
            end = gm.tm_hour*60*60+gm.tm_min*60+gm.tm_sec;
            total = end-start;
            for (int i = 0;i<strlen(s);i++)
                if (str[i]!=s[i+1])
                {
                    ++count;
                }
            float accuracy = ((strlen(s)-count)*100/strlen(s));
            float speed = (float)strlen(s)/((float)total/12);
            printf("Accuracy : %d\n",accuracy);
            printf("Speed : %f WPM\n",speed);
            printf("Enter details for the record\n");
            printf("Enter your user-name:");
            scanf("%s",name);
            score = accuracy*speed;
            fprintf(fa,"\n%s,%f",name,score);
            sleep(3);
            fclose(fa);
            fclose(fp);
            break;
        }
        case 3:
        {
            filename = "./files/hard.txt";
            fp = fopen(filename,"r");
            int count = 0;
            char s[1000]="";
            char str1[100];
            char str2[100];
            fgets(str,500,fp);
            fgets(str1,500,fp);
            fgets(str2,500,fp);
            strcat(str,str1);
            strcat(str,str2);
            printf(str);
            printf("\n\n");
            printf("Write the text\n\n");
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            start = tm.tm_hour*60*60+tm.tm_min*60+tm.tm_sec;
            scanf("%[^\t]s",s);
            time_t g = time(NULL);
            struct tm gm = *localtime(&g);
            end = gm.tm_hour*60*60+gm.tm_min*60+gm.tm_sec;
            total = end-start;
            for (int i = 0;i<strlen(s);i++)
                if (str[i]!=s[i+1])
                {
                    ++count;
                }
            float accuracy = ((strlen(s)-count)*100/strlen(s));
            float speed = (float)strlen(s)/((float)total/12);
            printf("Accuracy : %f\n",accuracy);
            printf("Speed : %f WPM\nS",speed);
            printf("Enter details for the record\n");
            printf("Enter your user-name:");
            scanf("%s",name);
            score = accuracy*speed;
            fprintf(fa,"\n%s,%f",name,score);
            sleep(3);
            fclose(fa);
            fclose(fp);
            break;
        }
            
    
        default:
            break;
    }


}