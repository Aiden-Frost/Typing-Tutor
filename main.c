#include<stdio.h>
#include<string.h>
#include "header.h"
void main()
{
    char user[20];
    char pass[20];
    char repass[20];
    char ch = 'Y';
    char *token;
    FILE *fp;
    int flag = 0;
    fp = fopen("./files/login.csv","a+");
    char str[100];
    int opt;
    while (ch == 'Y')
    {
        printf("1.To login\n");
        printf("2.To Sign-Up\n");
        printf("Enter your choice:");
        scanf("%d",&opt);
        if (opt == 1)
        {
            printf("Enter the user-name:");
            scanf("%s",user);
            int count = 0;
            while (fgets(str,100,fp))
            {
                token = strtok(str,",");
                if (!strcmp(token,user))
                {
                    
                    if (!flag)
                    {
                        printf("Enter the password:");
                        scanf("%s",pass);
                        flag = 1;
                    }

                    token = strtok(NULL,",");
                    if (!strcmp(pass,token))
                    {
                        printf("Successful\n\n");
                        ++count;
                        final();
                        ch = 'n';
                    }
                    
                }
            }
            if (!count)
            {
                printf("No existing user / Credentials are wrong");
                rewind(fp);
            }
            

        }
        if (opt == 2)
        

        {
            printf("Enter username:\n");
            scanf("%s",user);
            printf("Enter password:\n");
            scanf("%s",pass);
            retype:
            printf("Retype the password:\n");
            scanf("%s",repass);
            if(strcmp(pass,repass)==0)
            {

                fprintf(fp,"\n%s,%s",user,pass);
                printf("Success\n\n");
                final();
                break;

            }
            else
            {
                printf("something's wrong\n");
            }
        }

    }
fclose(fp);
}