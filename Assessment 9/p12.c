#include<stdio.h>
int main()
{
    int arr[100],a,b,sum=0;
    for(int i=0;i<1000;i++)
    {
        scanf("%d",&arr[i]);
        b=arr[i];
        sum=sum+b;
        if(b==0)
        {
            break;
        }
    }
    printf("%d",sum);
}
