#include <stdio.h>
#include "productos.h"

int main() {
    int opcion;

    do {
        printf("\nMenu:\n");
        printf("1. Ingresar producto\n");
        printf("2. Comprar producto\n");
        printf("3. Consultar producto\n");
        printf("4. Mostrar productos\n");
        printf("5. Modificar producto\n");
        printf("6. Eliminar producto\n");
        printf("7. Guardar productos\n");
        printf("8. Cargar productos\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: ingresar_producto(); break;
            case 2: comprar_producto(); break;
            case 3: consultar_producto(); break;
            case 4: mostrar_productos(); break;
            case 5: modificar_producto(); break;
            case 6: eliminar_producto(); break;
            case 7: guardar_archivo(); break;
            case 8: cargar_archivo(); break;
            case 0: printf("Saliendo...\n"); break;
            default: printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}
