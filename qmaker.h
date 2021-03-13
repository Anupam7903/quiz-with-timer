#include<string.h>
#define QMAKER
#ifndef QMAKER

char * qm(int a)
{
    char b[25];
    char A[25][50] = {"question1.txt","question2.txt","question3.txt","question4.txt","question5.txt","question6.txt","question7.txt","question8.txt","question9.txt","question10.txt","question11.txt","question12.txt","question13.txt","question14.txt","question15.txt","question16.txt","question17.txt","question18.txt","question19.txt","question20.txt","question21.txt","question22.txt","question23.txt","question24.txt","question25.txt","question26.txt","question27.txt","question28.txt","question29.txt","question30.txt"};
    strcpy(b,A[a]);
    return b;
}

#endif
