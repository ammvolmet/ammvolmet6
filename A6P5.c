#include<stdio.h>
int main()
{
    int n, i, qsum=0;
    printf("enter a number:\n");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    qsum=qsum+(i*i*i);
    printf("sum is %d", qsum);
    return 0;
}