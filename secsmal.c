#include<stdio.h>
void main()
{
  int i,j,tem,a[40],n;
  printf("\nEnter number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
      }
    }
  }
  printf("\nThe second smallest number is %d:",a[1]);
}
