#include<stdio.h>
int main()
{
  float average(float a[10]);
  float b[10];
  for(int i=0;i<10;i++)
    {
      scanf("%f",&b[i]);
    }
  float c;
  c=average(b);
  printf("the average is %.2f\n",c);
  return 0;
}
float average(float a[10])
{
  float aver,sum=0;
  for(int i=0;i<10;i++)
    {
      sum=sum+a[i];
    }
  aver=sum/10;
  return(aver);
}
