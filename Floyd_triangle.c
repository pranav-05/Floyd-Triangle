#include<stdio.h>
#include<conio.h>
void main()
{
    int row,col;
    char alpha='A';
    for(row=1;row<=5;row++)
    {
        for(col=row;col<=5;col++)
        {
            printf("%3c",alpha);
            alpha++;
        }
        printf("\n");

    }
    printf("\n\n");


    int num=1;;
    for(row=1;row<=5;row++)
    {
        for(col=row;col<=5;col++)
        {
            printf("%3d",num);
            num++;
        }
        printf("\n");

    }
}
