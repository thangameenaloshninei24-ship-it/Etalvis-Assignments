#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int *p;
    p=&x;
    printf("old value:%d\n",x);
    *p=15;
    printf("new value:%d\n",x);
    return 0;
}
