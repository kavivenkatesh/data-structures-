#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct rectangle r1={10,5};
    printf("%d\n",r1.length);
    printf("%d",r1.breadth);
    return 0;

}
