#include <stdio.h>
#include <string.h>
void practise()
{
    FILE *fp;
    char str[1000];
    int ch;
    char *filename;
    char c1[100];
    char c2[100];
    char c3[100];
    char a1[100];
    char a2[100];
    char a3[100];
    char d1[100];
    char d2[100];
    int count=0;
    char op[2] = "Y";
    while (!strcmp(op,"Y"))
    {
    printf("Practise:\n");
    printf("1.Practise F and J\n");
    printf("2.Practise D and K\n");
    printf("3.Practise S and L\n");
    printf("4.Practise A and ;\n");
    printf("5.Practise G and H\n");
    printf("6.Practise R and U\n");
    printf("7.Practise E and I\n");
    printf("8.Practise W and O\n");
    printf("9.Practise Q and Y\n");
    printf("10.Practise P and T\n");
    printf("11.Practise V and M\n");
    printf("12.Practise C and ,\n");
    printf("13.Practise X and .\n");
    printf("14.Practise Z and /\n");
    printf("15.Practise B and N\n");
    printf("Choose your Chapter:");
    scanf("%d",&ch);
    
    switch(ch)
    {
        
        case 1: {filename = "./files/fj.txt";break;}
        case 2: {filename = "./files/dk.txt";break;}
        case 3: {filename = "./files/sl.txt";break;}
        case 4: {filename = "./files/a;.txt";break;}
        case 5: {filename = "./files/gh.txt";break;}
        case 6: {filename = "./files/ru.txt";break;}
        case 7: {filename = "./files/ei.txt";break;}
        case 8: {filename = "./files/wo.txt";break;}
        case 9: {filename = "./files/qy.txt";break;}
        case 10:{filename = "./files/tp.txt";break;}
        case 11:{filename = "./files/vm.txt";break;}
        case 12:{filename = "./files/c,.txt";break;}
        case 13: {filename = "./files/x.txt";break;}
        case 14:{filename = "./files/z.txt";break;}
        case 15:{filename = "./files/bn.txt";break;}

    }
    fp = fopen(filename, "r");

    fgets(str, 1000, fp);
    for (int i=0;i<strlen(str)+1;i++)
        a1[i] = *(str+i);
    fgets(str, 1000, fp);
    for (int i=0;i<strlen(str)+1;i++)
        a2[i] = *(str+i);
    fgets(str, 1000, fp);
    for (int i=0;i<strlen(str)+1;i++)
        a3[i] = *(str+i);
    fgets(str, 1000, fp);
    for (int i=0;i<strlen(str)+1;i++)
        d1[i] = *(str+i);
    fgets(str, 1000, fp);
    for (int i=0;i<strlen(str)+1;i++)
        d2[i] = *(str+i);
    a1[strlen(a1)-1] = '\0';
    a2[strlen(a2)-1] = '\0';
    a3[strlen(a3)-1] = '\0';
    d1[strlen(d1)-1] = '\0';
    count = 0;
    printf("The %s and %s keys\n\n",a1,a2);
    while(count!=3)
    {
        switch (count)
        {

        case 0:
        {
            printf("%s\n",d1);
            scanf("%s",c1);
            if (!strcmp(c1,a1))
                count+=1;
            break;
        }
        case 1:
        {
            printf("%s\n",d2);
            scanf("%s",c2);
            if (!strcmp(c2,a2))
                count+=1;
            break;
        }
        case 2:
        {
            printf("Type this series with the fingers as instructed:\n");
            printf("%s\n",a3);
            scanf("%s",c3);
            if (strcmp(c3,a3)==0)
                ++count;
            break;
        }
        }
    }
    printf("Do you want to continue learning(Y/N):\n");
    scanf("%s",op);
    }

}