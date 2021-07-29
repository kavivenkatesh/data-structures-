#include<stdio.h>
#include<stdlib.h>
int main()
{

    int *p;
    p=(int*)malloc(5*sizeof(int));
    p[0]=10;p[1]=p[2]=14;p[3]=18;p[4]=16;
    for(int i=0;i<5;i++)
        printf("%d ",p[i]);

    free(p);
    return 0;
}
