#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a num for square");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        printf("\n %d = %d ",i,i*i);
}
