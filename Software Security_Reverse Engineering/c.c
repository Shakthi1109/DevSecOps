#include <stdio.h>

int main()
{
    double u = 0.1;
    double v = 0.1;
    double w = 0.1;
    
    //float x=0.0,y=0.0,z=0.0;
    
    for (int i=0; i<=25; i++)
    {
        u = 12*u-1.1;
        v = 10*v-0.9;
        w = 2*w-0.1;
        printf("u%d = %f   v%d = %f   w%d = %f \n",i,u,i,v,i,w);
    }
    
    return 0;
    
}


