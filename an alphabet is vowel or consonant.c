//samra chaudhary
#include <stdio.h>
void main()
{
    char ch;
    printf("enter the alphabet :");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
       ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
       printf("alphabet is vowel");
       else
       printf("alphabet is a consonant");

    }