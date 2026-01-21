#include<stdio.h>
int main(){
    int  arr[10]={1,3,4,53,9,3,9,0,8,2};
    int sol_arr[11];
 
    int carry=0;
for (int i=9;i>=0;i--){
   int  sum=(arr[i])+carry;
    sol_arr[i+1]=sum%10;
    carry=sum/10;
}
sol_arr[0]=carry;
printf("[");
for(int i=0;i<10;i++){
    printf("%d,",sol_arr[i]);
}
printf("%d]",sol_arr[10]);
return 0;
}
