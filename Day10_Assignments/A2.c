#include <stdio.h>
 
int main()
{
    int N;
    printf("\nEnter the number: \n");
    scanf("%d",&N);
    generateNthnum(N);
    return 0;
}
void generateNthnum(int num)
{
    int digits[]={1,4,6,9};
    int number[10];
    int iv=0;
    int i;
    while(num>0)
    {
        number[iv++]=digits[(num-1)%4];
        num=(num-1)/4;
    }
    for(i=iv-1;i>=0;i--)
    {
        printf("%d",number[i]);
    }
    printf("\n");
}


OUTPUT:
Enter the number: 21
111