#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n>1){
        n=n/2;
        printf("%d", n);
    }
}