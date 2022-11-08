#include<stdio.h>
int main()
{
    int n, i, osum=0;
    printf("enter a number:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i+=2)
    osum=osum+i;
    printf("sum is %d", osum);
    return 0;

}