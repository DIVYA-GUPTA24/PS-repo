#include<stdio.h>
void main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int b[4][4];
    int N;
    int i,j,t,r,row;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",a[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            b[i][j]=a[j][i];

        }
        printf("\n");
    }
    for(r=0;r<4;r++)
    {
        row=r;
        i=0;
        j=3;
        while(i<j)
        {
            t=b[row][i];
            b[row][i]=b[row][j];
            b[row][j]=t;
            i++;
            j--;


        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",b[i][j]);

        }
        printf("\n");
    }



}
