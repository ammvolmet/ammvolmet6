#include<stdio.h>
int main()
{
    int i, n, esum=0;
    printf("enter a number:\n");
    scanf("%d", &n);
  
    for(i=0; i<=n; i+=2)
        esum=esum+i;
     printf("sum is %d", esum);
        return 0;
   
}