#include<stdio.h>
long long int way(int n){
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(A[n]==0)
        A[n]=(way(n-1)+way(n-2))%1000000000;
    return A[n];
}

int main(void){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%lld\n",way(n));
    }
    return 0;
}
