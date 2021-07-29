//area and perimeter of rectangle
//monolithic program(everything written inside main program)
#include<stdio.h>
int main()
{

    int length=0,breadth=0;
    printf("enter the length and breadth");
    scanf("%d %d",&length,&breadth);

    int area=length*breadth;
    int peri=2*(length+breadth);

    printf("area=%d\nperimeter=%d",area,peri);
    return 0;
}

//modular program or procedural
#include<stdio.h>

int area(int length,int breadth)
{
    return length*breadth;
}

int perimeter(int length,int breadth)
{
    int p;
    p=2*(length+breadth);
    return p;
}

int main()
{

    int length=0,breadth=0;
    printf("enter the length and breadth");
    scanf("%d %d",&length,&breadth);

    int a=area(length,breadth);
    int peri=perimeter(length,breadth);

    printf("area=%d\nperimeter=%d",a,peri);
    return 0;
}

