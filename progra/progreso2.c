#include <stdio.h>

#define InsumosM 30
#define MESES 12

// Estructura para manejar los datos de ingresos y egresos por insumo y mes
typedef struct {
    int ingresos[MESES];
    int egresos[MESES];
} RegistroInsumo;

// Función para imprimir el detalle de ingresos y egresos por insumo y mes
void imprimir(RegistroInsumo insumos[], int numInsumos) {
    printf("Detalle de ingresos y egresos por insumo y mes:\n");
    for (int i = 0; i < numInsumos; i++) {
        printf("Insumo %d:\n", i + 1);
        for (int j = 0; j < MESES; j++) {
            printf("Mes %d - Ingresos: %d, Egresos: %d\n", j + 1, insumos[i].ingresos[j], insumos[i].egresos[j]);
        }
        printf("\n");
    }
}

// Función para obtener y mostrar el total de ingresos y egresos por insumo en todo el año
void obtenerTotalesAnuales(RegistroInsumo insumos[], int numInsumos) {
    printf("Totales de ingresos y egresos por insumo en todo el año:\n");
    for (int i = 0; i < numInsumos; i++) {
        int totalIngresos = 0, totalEgresos = 0;
        for (int j = 0; j < MESES; j++) {
            totalIngresos += insumos[i].ingresos[j];
            totalEgresos += insumos[i].egresos[j];
        }
        printf("Insumo %d - Total Ingresos: %d, Total Egresos: %d\n", i + 1, totalIngresos, totalEgresos);
    }
}

int main() {
    RegistroInsumo insumos[InsumosM] = {0}; // Inicializar todos los registros a cero

   
    for (int i = 0; i < InsumosM; i++) {
        for (int j = 0; j < MESES; j++) {
            insumos[i].ingresos[j] = (i + 1) * (j + 1) * 100;
            insumos[i].egresos[j] = (i + 1) * (j + 1) * 50;
        }
    }

    int opcion;
    do {
        printf("Seleccione una opción:\n");
        printf("1) Imprimir detalle de ingresos y egresos por mes y por insumo.\n");
        printf("2) Obtener total de ingresos y egresos por insumo en todo el año.\n");
        printf("3) Salir.\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                imprimirDetalle(insumos, InsumosM);
                break;
            case 2:
                obtenerTotalesAnuales(insumos, InsumosM);
                break;
            case 0:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Por favor, ingrese una opción válida.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}
