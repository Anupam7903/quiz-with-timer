#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
//#include"qmaker.h"

#define TRUE 1
#define MAX_TIME 30

//char * qm(int a);
void showoff(int t);
void fileprint(char file_name[25]);

int main(void)
{
    int time_left = MAX_TIME;
    int i,min = 00, pass_time = 5;
    char A[25][50]={"question1.txt","question2.txt","question3.txt","question4.txt","question5.txt",
                    "question6.txt","question7.txt","question8.txt","question9.txt","question10.txt",
                    "question11.txt","question12.txt","question13.txt","question14.txt","question15.txt",
                    "question16.txt","question17.txt","question18.txt","question19.txt","question20.txt",
                    "question21.txt","question22.txt","question23.txt","question24.txt","question25.txt",
                    "question26.txt","question27.txt","question28.txt","question29.txt","question30.txt"};

    FILE *fp;
    char c,file_name[30],ans = '^';

    for(i = 0 ; i < 30 ; ++i)
    {
    while(TRUE)
    {
        system("cls");

        strcpy(file_name,A[i]);
        showoff(time_left);
        printf("\n");
       
        time_left--;
       
        fileprint(file_name);
        /*fp = fopen(file_name,"r");
       
        while(TRUE)
        {
             c = fgetc(fp);
             if(c == EOF)
             break;
       
             if(c == '$')            //for new line
             printf("\n");
             else
             printf("%c",c);
        }*/
       /* if(time_left != -1)
        {
            printf("\nYour answer : ");
            scanf("%c",&ans);
        }*/
        Sleep(1000);
        
        if(time_left == -1)
        {
            while(pass_time != 0)
            {
                system("cls");
                printf("\n\n\n\t\t\t\t\t\t         TIME UP!");
                if(pass_time > 1)
                printf("\n\t\t\t\t\t\tNEXT QUESTION IN %d SECONDS",pass_time);
                else
                printf("\n\t\t\t\t\t\tNEXT QUESTION IN %d SECOND",pass_time);

                pass_time--;
                Sleep(1000);
            }
            pass_time = 5;
            break;
        }
    } 
    time_left=MAX_TIME; 
    }
    return 0;
}

/*char * qm(int a)
{
    char b[25];
    char A[25][50]={"question1.txt","question2.txt","question3.txt","question4.txt","question5.txt",
                    "question6.txt","question7.txt","question8.txt","question9.txt","question10.txt",
                    "question11.txt","question12.txt","question13.txt","question14.txt","question15.txt",
                    "question16.txt","question17.txt","question18.txt","question19.txt","question20.txt",
                    "question21.txt","question22.txt","question23.txt","question24.txt","question25.txt",
                    "question26.txt","question27.txt","question28.txt","question29.txt","question30.txt"};

    strcpy(b,A[a]);
    return A[a];
}*/

void showoff(int t)
{
    int min = 0;
    if(t > 9)
        {
            printf("\t\t\t\t\t*********************\n");
            printf("\t\t\t\t\t**    TIME LEFT    **\n");
            printf("\t\t\t\t\t*********************\n");
            printf("\t\t\t\t\t** ");
            printf("     %d : %d     **\n",min,t);
            printf("\t\t\t\t\t*********************\n");
        }
        else
        {
            printf("\t\t\t\t\t*********************\n");
            printf("\t\t\t\t\t**    TIME LEFT    **\n");
            printf("\t\t\t\t\t*********************\n");
            printf("\t\t\t\t\t** ");
            printf("    %2d : %d      **\n",min,t);
            printf("\t\t\t\t\t*********************\n"); 
        }
}

void fileprint(char file_name[25])
{
    FILE *fp;
    char c;
    fp = fopen(file_name,"r");

    while(TRUE)
        {
             c = fgetc(fp);
             if(c == EOF)
             break;
       
             if(c == '$')            //for new line
             printf("\n");
             else
             printf("%c",c);

        }

}
