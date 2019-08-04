#include<stdio.h>
void main()
{
  int a[20],i,j,n,t,b[20],k=0;
  printf("\nEnter the no. of elements:");
  scanf("%d",&n);
  printf("\nEnter the array elements:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
      if(a[i]>a[j])
      {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
      }
      
  for(i=0;i<n;i++)
  {
    if(a[i]!=a[i+1])
     {
      b[k]=a[i];
      k++;
      }
    
  }
  for(i=0;i<k-2;i++)
       printf("\n%d",b[i]);
  
}
