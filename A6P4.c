#include<stdio.h>
int main()
{
    int n, i, sqsum=0;
    printf("enter a number:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    sqsum=sqsum+(i*i);
    printf("sum is %d", sqsum);
    return 0;
}