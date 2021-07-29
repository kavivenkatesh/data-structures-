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

//how modular program is converted into structure and functions

#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);
    return p;
}

int main()
{

    struct rectangle r={0,0};
    printf("enter the length and breadth");
    scanf("%d %d",&r.length,&r.breadth);

    int a=area(r);
    int peri=perimeter(r);

    printf("area=%d\nperimeter=%d",a,peri);
    return 0;
}


//initialze function in above program
#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int initialise (struct rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(struct rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct rectangle r)
{
    int p;
    p=2*(r.length+r.breadth);
    return p;
}

int main()
{

    struct rectangle r={0,0};
    int l,b;
    printf("enter the length and breadth");
    scanf("%d %d",&l,&b);
    initialise(&r,l,b);

    int a=area(r);
    int peri=perimeter(r);

    printf("area=%d\nperimeter=%d",a,peri);
    return 0;
}



