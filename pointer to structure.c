#include<stdio.h>
#include<stdlib.h>

struct rectangle
{
    int length;
    int breadth;
};
int main()
{
  struct rectangle *p;
  p=(struct rectangle *)malloc(sizeof(struct rectangle));

  p->length=15;
  p->breadth=10;
  printf("%d",p->length);
}
