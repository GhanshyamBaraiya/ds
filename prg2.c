#include<stdio.h>
#include<stdlib.h>
#define n 10
int top = -1,a[n],i;
int dis()
{
    printf("\n ");
    if(top<0)
    {
        printf("array is empty now....");
    }
    else
    {
        for(i=0;i<=top;i++)
        {


            printf("%d ",a[i]);
        }
    }
}
int push (int val)
{
    if(top>=n-1)
    {
        printf("\n array is full...");
    }
    else
    {
        ++top;
        a[top]=val;
    }
}
int pop()
{
    if (top<0)
    {
        printf("\n array is alrady empty...");
    }
    else
    {
        --top;
    }
}
int add(int val)
{
    if (top >= n-1)
    {
        printf("\n arraay is low....");
    }
    else
    {
        top++;
        for (i=top; i>=0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
    }
}
int del()
{
    if (top < 0)
    {
        printf("\n array is already empty......");
    }
    else
    {
        for (i=0; i<top; i++)
        {
            a[i] = a[i + 1];
        }
    }
    top--;
}
int main()
{
    push(10);
    push(20);
    push(30);
    add(50);

    dis();
    

    
    
}