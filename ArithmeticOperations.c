//C program to perform arithmetic operations between two numbers 
//05/10/2023
//ArithmeticOperations.c

    #include<stdio.h>
    int main(){
        int a,b;
        printf("Enter A Value : ");
        scanf("%d",&a);
        printf("Enter B value : ");
        scanf("%d",&b);
        printf("------------------------------------------------\n");
        printf("\nThe Addition of  %d and %d is %d " ,a,b,(a+b));
        printf("\n------------------------------------------------\n");
        printf("\nThe Difference of  %d and %d is %d " ,a,b,(a-b));
        printf("\n------------------------------------------------\n");
        printf("\nThe Product of  %d and %d is %d " ,a,b,(a*b));
        printf("\n------------------------------------------------\n");
        printf("\nThe Quotient of  %d and %d is %d " ,a,b,(a/b));
        printf("\n------------------------------------------------\n");
        printf("\nThe Remainder of  %d and %d is %d " ,a,b,(a%b));
        printf("\n------------------------------------------------");
    
}
