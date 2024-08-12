#include <stdio.h>
#include <math.h>

float distancia(float a, float b, float c, float d);

struct par_ordenado{
    float c_x,c_y;
};


int main() {
    
    struct par_ordenado p1,p2;
   
    float  dist;


    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &p1.c_x, &p1.c_y);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &p2.c_x, &p2.c_y);

    dist = distancia(p1.c_x, p1.c_y, p2.c_x, p2.c_y);

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n", p1.c_x, p1.c_y, p2.c_x, p2.c_y, dist);

    return 0;
}


float distancia(float x1,  float y1, float x2,float y2) {
    float d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    return d;

    
}
