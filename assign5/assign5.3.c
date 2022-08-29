#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter num for printing revers number");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
        printf("\t%d",i);
}
