/* EXP 5
TITLE: WAP TO FIND THE FACTORIAL OF NUMBER USING ITERATIVE AND NRECURSIVE FUNCTION.
NAME: SAYYED ZEENAT ABDUL KARIM
UIN: 241P023
BRANCH: COMPUTER ENGINEERING
DIV: C
ROLL NO: 22
BATCH: C2
*/
#include <stdio.h>
// Function declaration
int fact(int n);
int main()
{
int n;
printf("Enter the number: ");
scanf("%d", &n);
if (n < 0)
{
printf("Factorial of a negative number is not defined.\n");
}
else
{
printf("Factorial of %d is %d\n", n, fact(n));
}
return 0;
}
// Function definition
int fact(int n)
{
if (n == 0 || n == 1)
return 1;
else
return n * fact(n - 1);
}
/* OUTPUT
Enter the number: 5
Factorial of 5 is 120
*/
