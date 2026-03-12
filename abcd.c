#include <stdio.h>
int main()
{
    int numb,i,result;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d",&numb);
    for(i=1;i<=10;i++)
    {
        result = numb * i;
        printf("%d\n",result);
    }
    return 0;
}