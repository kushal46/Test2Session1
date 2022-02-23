#include<stdio.h>
#include<math.h>
void input(float*x1,float*y1,float*x2,float*y2)
{
  printf("Enter the co-ordinates of the points: \n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void find_distance(float x1,float y1,float x2,float y2,float *d)
{
  
  *d=(x2-x1)*(x2*x1)/(y2-y1)*(y2-y1);
}

void output(float d)
{ 
  printf("The distance between the two points is %f",d);
}

int main()
{ float d;
  float x1,y1,x2,y2;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&d);
  output(d);
  return 0;
}