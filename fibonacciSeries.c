#include <stdio.h>
int main() 
    {
     int i,n,n1=0,n2=1,LastTerm;
     printf("Enter the number of terms:");
     scanf("%d",&n);
     printf("Fibonacci Series:");
    
     for(i=1;i<=n;i++)
    {
        printf("%d,",n1);
        LastTerm=n1+n2;
        n1=n2;
        n2=LastTerm;
    }
       return 0;
    }
