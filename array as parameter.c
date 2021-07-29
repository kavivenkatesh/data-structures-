#include<stdio.h>

void fun(int *a,int n)
{
    a[0]=5;
}
int main()
{
    int i,n=5,a[]={1,2,3,4,5};
    fun(a,n);
     for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
