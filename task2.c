#include<stdio.h>
void main()
{
   int i,j,n,a[20],f=0,check_flag=0;
   printf("\nEnter the elements in array:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   for(i=0;i<n;i++)
    {
     f=0;
     for(j=2;j<a[i];j++)
       {
       if(a[i]%j==0)
        { 
          f=1;
          break; 
        }   
       }
       if(f==0)
        {
          if(check_flag==0)
           {
             printf("\nprime=%d",a[i]);
             check_flag+=1;
            }
           else
             check_flag-=1;
      }
    }         
}
