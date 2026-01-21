#include<stdio.h>
void incre(int *a,int size){
    for(int i=0;i<size;i++){
        a[i]++;
    }
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    incre(arr,5);
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
