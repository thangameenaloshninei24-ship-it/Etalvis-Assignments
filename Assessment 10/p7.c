#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a,100,stdin);
    int b=strlen(a);
    printf("%d",b-1);
}
