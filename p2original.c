#include<stdio.h>
#include<math.h>

void input_triangle(float*x1,float*y1)
{
  printf("Enter the co-ordinates: \n");
  scanf("%f%f",x1,y1);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)

{
   int a,b,c;
  a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
  b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
  c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
  if((a+b)>c && (b+c)>a && (c+a)>b)
    return 1;
  else
    return 0;
}


void output(int istriangle)
{  
  if (istriangle == 0)
    printf("The given points doesn't form a triangle");
  else
    printf("The given points does  form a triangle");
}

int main()
{ int istriangle;
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1);
  input_triangle(&x1,&y1);
  input_triangle(&x1,&y1);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(istriangle);
  return 0;
}