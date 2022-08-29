#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number for printing n odd number");
    scanf("%d",&n);
    for(i=0;i>=n;i=i-2)
        printf("\n%d",i);
}
