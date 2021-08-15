//samra chaudhary

#include <stdio.h>
void main()
{
    int no, abs;
    printf("enter a number of its absolute value ");
    scanf("%d",&no);
    if(no>=0) //conditional statement
    abs=no;
    else
    abs=no*-1;
    printf("absolute value of %d is %d",no,abs);
}