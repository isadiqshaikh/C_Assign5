#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number for printing even num ");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2)
        printf("\t%d",i);
}
