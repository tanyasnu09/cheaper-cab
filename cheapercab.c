#include <stdio.h>
int main()
{
    int a,b,t,i;
printf("enter no of test cases\n");
scanf("%d",&t);
for (i=0;i<=t;i++)
{


    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
    if (a>b)
{
    printf("cab b is cheaper\n");

}
else if (b>a)
{
    printf("cab a is cheaper\n");

}
else
{
    printf("any\n");
}
}
}