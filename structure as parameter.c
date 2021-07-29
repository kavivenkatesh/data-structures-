//call by value
#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
void fun(struct rectangle r)
{
     r.length=20;
     printf("length %d \nbreadth %d\n",r.length,r.breadth);

}

int main()
{
    struct rectangle r={10,5};
    fun(r);
    printf("length %d \nbreadth %d\n",r.length,r.breadth);
    return 0;

}


//call by address
struct rectangle
{
    int length;
    int breadth;
};
void fun(struct rectangle *p)
{
     p->length=20;
     printf("length %d \nbreadth %d\n",p->length,p->breadth);

}

int main()
{
    struct rectangle r={10,5};
    fun(&r);
    printf("length %d \nbreadth %d\n",r.length,r.breadth);
    return 0;

}




