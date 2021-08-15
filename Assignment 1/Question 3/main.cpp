// Program to find the maximum number in an array

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[15];

    int ans=0;

    printf("Enter the numbers\n");

    for(int i=0;i<15;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<15;i++)
    {
        if(ans<arr[i])
         ans=arr[i];
    }

    printf("%d\n",ans);

    return 0;
}