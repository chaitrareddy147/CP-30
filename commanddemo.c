#include<conio.h>
#include<stdio.h>
int main(int argc,char*argv[])
{
    char command[50];
    strcpy(command, argv[1]);
    system(command);
    //printf("%s\n",argv[0]) ;
    //printf("%s\n",argv[1]);
    //printf("%s\n",argv[2]);
    getch();
    return 0;
}