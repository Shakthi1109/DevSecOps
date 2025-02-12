#include <stdio.h>

int main()
{
//int to float
    int a = 5000;
    float b=0.0; 

    b = (float) a;
    printf("%f \n",b);
    
//float to int
    
    float small = 0.12;
    float medium = 0.123456;
    float large = 0.123456789123;
    
    int smallint = (int) small;
    int mediumint = (int) medium;
    int largeint = (int) large;      
    
    printf("%d \n",smallint);
    printf("%d \n",mediumint);
    printf("%d \n",largeint);
    printf("%x \n",medium);
    *((float*)&medium);
            
    return 0;
}

