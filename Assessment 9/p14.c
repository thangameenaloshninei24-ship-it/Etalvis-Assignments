#include<stdio.h>
int main()
{
    int arr[100],c=0,a,b,b1,sum=0;
    for(int i=0;i<1000;i++)
    {
        scanf("%d",&arr[i]);
        b1=arr[i];
        if(b1==0)
        {
            break;
        }
        c++;
    }
    if(c%2!=0)
    {
        a=c/2;
        printf("%d",arr[a]);
    }
    else
    {
        a=c/2;
        b=arr[a]+arr[a+1];
        printf("%d",b/2);

    }
}
