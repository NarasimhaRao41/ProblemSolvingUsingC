// C program to find Largest of three Numbers or Greatest of three numbers using conditional statements
//05/10/2023
//Greatest3.c

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);
    printf("Enter the value of C : ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest value ",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is the greatest value ",b);
    }
    else
    {
        printf("%d is the greatest value ",c);
    }
}
