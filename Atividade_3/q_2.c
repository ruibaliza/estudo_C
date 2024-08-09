#include <stdio.h>
#include <math.h>

float distancia(float a, float b, float c, float d);



int main() {
    float x1, y1, x2, y2, dist;


    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    dist = distancia(x1, y1, x2, y2);

    printf("A distancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) eh: %.2f\n", x1, y1, x2, y2, dist);

    return 0;
}


float distancia(float x1,  float y1, float x2,float y2) {
    float d = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    return d;

    
}
