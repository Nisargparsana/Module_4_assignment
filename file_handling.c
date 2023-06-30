#include<stdio.h>

int main()
{

    FILE *ptr;

    ptr= fopen("Hello.txt","a");

    fprintf(ptr,"Hello world");

    fclose(ptr);


}