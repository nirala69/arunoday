#include<stdio.h>
int main()
{
  int n;

  scanf("%d",&n);
 for(int i = n;i>0;i--)
 {
     for(int j = n;j>0;j--)
     {
          if(j>=i)
            printf("%d",j);
          else if( j<i)
            printf("%d",i);

     }
     for(int k = 2;k<=n;k++)
     {
          if(k<=i)
            printf("%d",i);
          else printf("%d",k);
     }
     printf("\n");
 }
 for(int i = 2;i<=n;i++ )
 {

     for(int j = n;j>0;j--)
     {   if(j>=i)
     printf("%d",j);
     else
        printf("%d",i);
     }
      for(int k = 2;k<=n;k++)
      {
          if(i<=k)
            printf("%d",k);
          else
            printf("%d",i);
      } printf("\n");
     }

  return 0;
}
