

#include <stdio.h>

#define PI 3.14


int main(){

float radius, area, perimeter;
    
    printf("Introduzca el radio del circulo: ");
    scanf("%f", radius);

    printf("\n\n");
    
    area = PI * (radius)^2;
    perimetro = 2 * PI * radius;

    printf("Area del circulo: %.2f", area);

    printf("Perimetro del circulo: %f.2", perimeter);

}
