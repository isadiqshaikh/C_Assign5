#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter a number for printing n odd natural number in reverse order");
    scanf("%d",&n);
    for(i=n;i>=0;i=i-2)
        printf("\t%d",i);
}
