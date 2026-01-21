#include<stdio.h>
int main(){
    int arr[50]={0};
    int arr2[50]={0};
    int sum[51]={0};
    int c=0;
    for (int i=49;i>=0;i--){
        int s=arr[i]+arr2[i]+c;
        sum[i+1]=s%10;
        c=s/10;
    }sum[0]=s;
    return 0;
}
