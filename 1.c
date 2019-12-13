#include <stdio.h>
#include <math.h>

int main(void){
    
    float x,y,z;
    float s=0;
    printf("vvedite x: ");
    scanf("%f",&x);
    printf("vvedite y: ");
    scanf("%f",&y);
    printf("vvedite z: ");
    scanf("%f",&z);

    //x=0.1722;
    //y=6.33;
    //z=3.25*pow(10,-4);
    
    s=(5*atan(x))-(1/4*acos(x))*(x+3*abs(x-y)+(x*x))/(abs(x-y)*z+(x*x));
    printf("vvedennie znashediya: x=%f, y=%f, z=%f",x,y,z);
    printf(" \n rezult= %0.3f ",s);

    return 0;
}
