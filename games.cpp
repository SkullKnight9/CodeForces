#include<stdio.h>
using namespace std;
int main()
{
   int n,a[30][2],i,j,count=0;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           for(j=0;j<2;j++)
           {
               scanf("%d",&a[i][j]);
           }
       }
        for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               if(a[i][0]==a[j][1])
               {
                   count++;
               }
           }
       }
       printf("%d",count);
    return 0;
}