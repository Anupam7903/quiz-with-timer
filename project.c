#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

#define TRUE 1
#define MAX_TIME 7

void showoff(int t);
void fileprint(char file_name[25]);
void endscreen(int timee);

int main(void)
{
    int time_left = MAX_TIME;
    int i,min = 00, pass_time = 5;
    char A[25][50]={"question1.txt","question2.txt","question3.txt","question4.txt","question5.txt",
                    "question6.txt","question7.txt","question8.txt","question9.txt","question10.txt",
                    "question11.txt","question12.txt","question13.txt","question14.txt","question15.txt",           //to work
                    "question16.txt","question17.txt","question18.txt","question19.txt","question20.txt",
                    "question21.txt","question22.txt","question23.txt","question24.txt","question25.txt",
                    "question26.txt","question27.txt","question28.txt","question29.txt","question30.txt"};

    FILE *fp;
    char c,file_name[30],ans = '^';

    for(i = 0 ; i < 30 ; ++i)               //to work
    {
    while(TRUE)
    {
        system("cls");

        strcpy(file_name,A[i]);
        showoff(time_left);
        printf("\n");
       
        time_left--;

        fileprint(file_name);
        
        Sleep(1000);
        
        if(time_left == -1)
        {
            endscreen(pass_time);
            pass_time = 5;
          
            break;
        }
    } 
    time_left=MAX_TIME; 
    }
    return 0;
}

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

void endscreen(int timee)
{
     while(timee != 0)
            {
                system("cls");
                printf("\n\n\n\t\t\t\t\t\t         TIME UP!");
                if(timee > 1)
                printf("\n\t\t\t\t\t\tNEXT QUESTION IN %d SECONDS",timee);
                else
                printf("\n\t\t\t\t\t\tNEXT QUESTION IN %d SECOND",timee);

                timee--;
                Sleep(1000);
            }
}



/*  PROBLEMS :

    scanf problem (ip op)
    int to string problem (question automation`)
    student database problem(to make)
    rand and srand (to make)
    blinking problem
    timer problem (00:00)
    answers (check)

*/    
