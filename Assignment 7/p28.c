#include<stdio.h>
void lcm_2(int n1,int n2){
 int g=n1;
    if (n2>n1){g=n2;}
    for (int lcm=g;g!=0;lcm+=g){
        if(lcm%n1==0 && lcm%n2==0){ printf("%d",lcm);
        return ;
    }}
}
int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
   lcm_2(n1,n2);
   return 0;
}
