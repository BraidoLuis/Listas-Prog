#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vector;

Vector addVectors(Vector A, Vector B) {
    Vector sum;
    sum.x = A.x + B.x;
    sum.y = A.y + B.y;
    sum.z = A.z + B.z;
    return sum;
}

void multiply(Vector A, Vector B) {
    float maxCoord = B.x;
    if (B.y > maxCoord) {
        maxCoord = B.y;
    }
    if (B.z > maxCoord) {
        maxCoord = B.z;
    }
    
    // Multiplica as coordenadas do vetor A pelo maior valor das coordenadas do vetor B
    float axb = A.x * maxCoord;
    float ayb = A.y * maxCoord;
    float azb = A.z * maxCoord;
    
    printf("Multiplicacao dos vetores: x=%.2f , y=%.2f, z=%.2f\n", axb, ayb, azb);
}

int main() {
    Vector A, B;
    
    printf("Digite as coordenadas do vetor A (x y z): ");
    scanf("%f %f %f", &A.x, &A.y, &A.z);
    
    printf("Digite as coordenadas do vetor B (x y z): ");
    scanf("%f %f %f", &B.x, &B.y, &B.z);
    
    Vector sum = addVectors(A, B);
    printf("A soma dos vetores: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);
    
    multiply(A, B);
    
    return 0;
}
