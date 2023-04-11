#include<stdio.h>
int main(){
int x;
while(scanf("%d",&x)!= EOF)
{
    if(x==1999)
    {
        printf("correct\n");
        break;
    }
    else
    {
        printf("wrong\n");
    }


}


return 0;}
