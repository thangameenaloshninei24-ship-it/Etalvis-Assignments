#include<stdio.h>
#include<string.h>
int main()
{
    char arr[51];
    fgets(arr,51,stdin); 
    arr[strcspn(arr,"\n")]='\0';  
    for(int i=0;arr[i]!='\0';i++)
    {
        if((arr[i]>=48) && (arr[i]<=57))
        {
            continue;
        }  
        else
        {
            printf("Invalid");
            return 0;
        } 
    }
    printf("Valid");
}
