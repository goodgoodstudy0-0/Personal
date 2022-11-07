#include<stdio.h>
int main()
{
    int i;
    int max;
    int need;
    int array1[100];
    int array2[100];
    scanf("%d",&need);
    for(i=0;i<need;i++)
    {
        scanf("%d",&array1[i]);
    }
    max=array2[0]=array1[0];
    for(i=1;i<need;i++)
    {
        if(array2[i-1]>0)
        {
            array2[i]=array2[i-1]+array1[i];
        }
        else
        {
            array2[i]=array1[i];
        }
        if(array2[i]>max)
        {
            max=array2[i];
        }
    }
    if(max>0)
    {
        printf("%d",max);
    }
    return 0;
}