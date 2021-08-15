//samra chaudhary
#include <stdio.h>
#include<math.h>//sqrt function is declared in this header file
int main()
{
    int number;
    float as;
    printf("Enter a number: ");
    scanf("%d", &number);
    
   as = sqrt(number); //sqrt is  a square root
    printf("square root of %d is %float",  number, as);
    
}
