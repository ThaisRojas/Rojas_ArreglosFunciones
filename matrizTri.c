#include <stdio.h>

//Funcion main
int main() {
    int x, y, z;

// Funcion printf
    printf("Ingrese las dimensiones (x, y, z) del arreglo tridimensional separadas por espacios: "); // Pide al usuario las dimensiones
   //Funcion scanf
    scanf("%d %d %d", &x, &y, &z);


    int arreglo[x][y][z]; // Declara el arreglo tridimensional con las dimensiones

    for (int i = 0; i < x; i++) { // Inicia las matrices en ceros
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arreglo[i][j][k] = 0;
            }
        }
    }
    for (int j = 0; j < y; j++) {
        for (int k = 0; k < z; k++) {
            arreglo[x - 1][j][k] = 1; // Inicia la matriz en unos
        }
    }

    printf("\nArreglo tridimensional:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", arreglo[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}