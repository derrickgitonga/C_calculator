#include <stdio.h>
int compute_sum(n1,n2);int compute_subtraction(n1,n2);int compute_multiplication(n1,n2);int compute_division(n1,n2);
int main()
{
    // declare local variables
    char opt;
    int n1, n2,sum,subtraction,multiplication,division;

    printf (" Select an operator (+, -, *, /) to perform an operation in C calculator \n ");
    scanf ("%c", &opt); // take an operator
    printf (" Enter the first number: ");
    scanf(" %d", &n1); // take fist number
    printf (" Enter the second number: ");
    scanf (" %d", &n2); // take second number

    if (opt == '+')
    {     sum= n1 + n2; // add two numbers
        printf (" Addition of %d and %d is: %d", n1, n2, sum);
       { if (sum %2==0)
        printf(" \n the sum is even number");
        else
        printf("\n the sum is odd number");}
    }

    else if (opt == '-')
    {
    subtraction= n1 - n2; // subtract two numbers
        if (n1 > 0)
        printf (" Subtraction of %d and %d is: %d", n1, n2, subtraction);
        else
        printf("\n you should not subtract from a negative numer");
        { if (subtraction %2==0)
        printf("\n the result of subtraction is even number");
        else
        printf(" \n the result of sutraction is odd number");}
    }

    else if (opt == '*')
    {

     multiplication = n1 * n2; // multiply two numbers
        printf (" Multiplication of %d and %d is: %d", n1, n2, multiplication);
        { if (multiplication%2==0)
        printf("\n the result of multiplication is even number");
        else if(n1*n2=0)
        printf("\n the result of multiplication is not odd or even number");
        else
        printf("\n the result of multiplication is odd");}
    }

    else if (opt == '/')
    {
        if (n2 == 0)   // if n2 == 0, take another number
        {
            printf (" \n Divisor cannot be zero. Please enter another value ");
            scanf ("%d", &n2);
        }
    division = n1 / n2; // divide two numbers
        printf (" Division of %d and %d is: %.2d", n1, n2, division);
        { if (division %2==0)
        printf("\n the result of division is even number");
        else
        printf("\n the result of division is odd number");}

    }
    else
    {
        printf(" \n You have entered wrong inputs ");
    }

}
