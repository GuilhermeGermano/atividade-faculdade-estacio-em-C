#include <stdio.h>
int main()
{
    int a = 4;
    int b = 8;
    int *a1;
    int *b2;
    
    a1 = &a;
    b2 = &b;
    
    if (a1 > b2)
    {
        printf("O endereço maior: %p", a1);
    }
    else
    {
        printf("O endereço maior: %p", b2);
    }
    return 0;
   
}