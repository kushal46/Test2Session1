#include<stdio.h>
#include<math.h>

void input_triangle(float*x1,float*y1,float*x2,float*y2,float*x3,float*y3)
{
  printf("Enter the co-ordinates: \n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}

int is_triangle(float x1,float y1,float x2,float y2,float x3,float y3)
{ float s;
  s=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
if(s=0)
  return 0;
  else
  return 1;
}

void output(int istriangle)
{  
  if (istriangle = 0)
    printf("The given points doesn't form a triangle");
  else
    printf("The given points does  form a triangle");
}

int main()
{ int istriangle;
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  istriangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(istriangle);
  return 0;
}