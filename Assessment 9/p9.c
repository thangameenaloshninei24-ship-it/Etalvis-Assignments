#include<stdio.h>
int main()
{
    int arr[100],arr1[100],c=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            arr1[c]=arr[i];
            c++;
        }
    }
    for(int i=0;i<c;i++)
    {
        printf("%d ",arr1[i]);
    }
}
