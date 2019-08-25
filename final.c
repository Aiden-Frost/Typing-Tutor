#include<stdio.h>
#include"header.h"
void final()
{
    int opt = 0;
    while (opt!=4)
    {
        printf("Welcome to Typing Tutor\n\n");
        printf("1.Learn to type\n");
        printf("2.Challenge your typing skills\n");
        printf("3.Highcore\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        
        scanf("%d",&opt);
        switch (opt)
        {
            case 1:practise();break;
            case 2:challenge();break;
            case 3:highscore();break;
        }
    }
}
