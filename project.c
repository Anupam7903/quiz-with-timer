#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#define TRUE 1
#define MAX_TIME 40

int main(void)
{
    int time_left = MAX_TIME;

    FILE *fp;
    char c;
    fp = fopen("questions.txt","r");

    while(TRUE)
    {
        system("cls");
       
        printf("%2d \n",time_left);
        time_left--;
       
        c = fgetc(fp);
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

        Sleep(1000);
        
        if(time_left == -1)
        break;
    }
    return 0;
}