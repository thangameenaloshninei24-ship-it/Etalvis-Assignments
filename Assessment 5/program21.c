#include <stdio.h>
int main(){
    int a,sum=0;
    printf("Enter Number:");
    scanf("%d",&a);
    while(a>0){
        int o=a%10;
        if(o%2!=0){
            sum+=1;
        }
        a/=10;
    }
    printf("%d",sum);
}
