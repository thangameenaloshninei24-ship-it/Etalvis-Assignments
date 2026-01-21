#include<stdio.h>
int main()
{
    int arr[100],sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
         sum=sum+arr[i];
    }
    printf("%d",sum);
}
