#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a,100,stdin);
    int b=strlen(a),c;
    printf("%d\n",b);
    for(int i=0;i<b-1;i++)
    {   
        if(a[i]!='\n')
        {
          c=a[i]-48;
          printf("%d\n",c);
        }
    }
}
