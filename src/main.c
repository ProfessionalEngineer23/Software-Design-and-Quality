// Name: Niki Mardari
// Aim: To calculate the sum of the digits of a multi-digit integer input by the user.

#include <stdio.h>

int main()
{

int n = 0;

printf("Please input a multi digit value.\nThis program will get the sum of the single digits:\n");
while (scanf("%d", &n) != 1) 
{
    printf("Invalid input. Please enter a valid integer.\n");
    while (getchar() != '\n'); // Clear input buffer
}

int sum = 0;
while(n > 0)
{
    sum += n % 10;
    n /= 10;
}

printf("Sum of the digits: %d\n", sum);

return 0;
}

/*
/////////////////////////////////////////////////////////////
To do:
- What if the user enters spaces, need to handle that.

Done:
- Write a simple c program.


/////////////////////////////////////////////////////////////
To Compile:
- gcc src/main.c -o bin/main

To Run:
- bin/main
/////////////////////////////////////////////////////////////
*/