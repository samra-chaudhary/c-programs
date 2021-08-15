// name: samra chaudhary

#include <stdio.h>  
  
int main()  
{  
    float length, width, perimeter; //float is used for decimal values 
  
    printf("Enter length of Rectangle\n");  
    scanf("%f", &length); //taking user input 
  
    printf("Enter width of Rectangle\n");  
    scanf("%f", &width);  
  
    perimeter = 2 * (length + width);  
  
    printf("Perimeter of Rectangle is %f\n", perimeter);  
  
    return 0;  
}  