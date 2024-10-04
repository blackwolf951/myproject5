#include <stdio.h>
#define LENGTH 5

int total(int [] , int);

int main()
{
  int i,j;
  float a,b,c,d,e,ele;

  int tests1[LENGTH];
  int tests2[LENGTH];
  int tests3[LENGTH];
  int tests4[LENGTH];

  
  for(i=0 ; i<LENGTH ; i++)
  {
    printf("請輸入第%d位學生的成績=", (i+1));
    scanf("%d %d %d %d",&tests1[i],&tests2[i],&tests3[i],&tests4[i]);
  
  }
  for(i=0;i<LENGTH;i++)
  {
    ele=(tests1[i]*0.1+tests2[i]*0.2+tests3[i]*0.35+tests4[i]*0.35);
    printf("學號500%d的成績是%.2lf\n",i+1,ele);
  } 
  //111111111111111111111111111111111
  a=(tests1[1]*0.1+tests2[1]*0.2+tests3[1]*0.35+tests4[1]*0.35);
  b=(tests1[2]*0.1+tests2[2]*0.2+tests3[2]*0.35+tests4[2]*0.35);
  c=(tests1[3]*0.1+tests2[3]*0.2+tests3[3]*0.35+tests4[3]*0.35);
  d=(tests1[4]*0.1+tests2[4]*0.2+tests3[4]*0.35+tests4[4]*0.35);
  e=(tests1[0]*0.1+tests2[0]*0.2+tests3[0]*0.35+tests4[0]*0.35);

  float num[5] = {a,b,c,d,e};
  float Max,Min;
  Max = Min = num[0];    

  //11111111111111111111111111111111
      for (j = 0; j < 5; j++)
    {
        if (Max < num[j]) 
        
            Max = num[j]; 
           
        if (Min > num[j])
            Min = num[j];
    }
    printf("最大值為：%.2lf\n", Max);
    printf("最小值為：%.2lf\n", Min);
  
  
  
  return 0; 
}
