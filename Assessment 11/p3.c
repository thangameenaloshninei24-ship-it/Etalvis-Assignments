#include<stdio.h>
void inc(int * val){*val=*val+1;}
int main(){
    int x=1;
    int *s;
    s=&x;
    for(int i=1;i<6;i++){
        printf("%d\n",x);
        inc(s);
    }
    return 0;
}
