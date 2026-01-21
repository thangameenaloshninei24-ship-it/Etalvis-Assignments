#include<stdio.h>
int main()
{
    int arr[100],c=0,a,b,sum=0;
    for(int i=0;i<1000;i++)
    {
        scanf("%d",&arr[i]);
        b=arr[i];
        sum=sum+b;
        if(b==0)
        {
            break;
        }
        c++;
    }
    if(arr[0]==arr[c-1])
    {
        printf("success");
    }
    else
    {
        printf("failure");
    }
}
