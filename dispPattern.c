#include <stdio.h>
int main() 
{
   int i,j,dif,value,n;

   printf("Enter rows: ");
   scanf("%d",&n);

   for(i=1; i<=n; i++)
   {
       dif= n-1;
       value = i;
       for(j=1; j<=i; j++)
       {
           printf("%-3d",value);

           value += dif;
           dif--;

       }
       printf("\n");
   }
   return 0;
}
