#include "productos.h"

Producto productos[MAX_PRODUCTOS];
int num_productos = 0;

void ingresar_producto() {
    if (num_productos >= MAX_PRODUCTOS) {
        printf("No se pueden agregar mas productos.\n");
        return;
    }
    Producto p;
    printf("Ingrese el nombre del producto: ");
    scanf("%49s", p.nombre);
    printf("Ingrese el tiempo de fabricacion (en minutos): ");
    scanf("%d", &p.tiempo_fabricacion);
    printf("Ingrese la cantidad de recursos necesarios: ");
    scanf("%d", &p.recursos_necesarios);
    p.cantidad_stock = 0; // Inicialmente no hay stock

    productos[num_productos++] = p;
    printf("Producto ingresado exitosamente.\n");
}

void comprar_producto() {
    char nombre[50];
    int cantidad;
    printf("Ingrese el nombre del producto a comprar: ");
    scanf("%49s", nombre);
    printf("Ingrese la cantidad a comprar: ");
    scanf("%d", &cantidad);

    int index = buscar_producto(nombre);
    if (index == -1) {
        printf("Producto no encontrado.\n");
        return;
    }

    productos[index].cantidad_stock += cantidad;
    printf("Stock actualizado. Nueva cantidad: %d\n", productos[index].cantidad_stock);
}

void consultar_producto() {
    char nombre[50];
    printf("Ingrese el nombre del producto a consultar: ");
    scanf("%49s", nombre);

    int index = buscar_producto(nombre);
    if (index == -1) {
        printf("Producto no encontrado.\n");
        return;
    }

    Producto p = productos[index];
    printf("Producto: %s\n", p.nombre);
    printf("Tiempo de fabricacion: %d minutos\n", p.tiempo_fabricacion);
    printf("Recursos necesarios: %d\n", p.recursos_necesarios);
    printf("Stock disponible: %d\n", p.cantidad_stock);
}

void mostrar_productos() {
    if (num_productos == 0) {
        printf("No hay productos registrados.\n");
        return;
    }
    for (int i = 0; i < num_productos; i++) {
        Producto p = productos[i];
        printf("Producto: %s, Tiempo de fabricacion: %d, Recursos necesarios: %d, Stock: %d\n", 
               p.nombre, p.tiempo_fabricacion, p.recursos_necesarios, p.cantidad_stock);
    }
}

void modificar_producto() {
    char nombre[50];
    printf("Ingrese el nombre del producto a modificar: ");
    scanf("%49s", nombre);

    int index = buscar_producto(nombre);
    if (index == -1) {
        printf("Producto no encontrado.\n");
        return;
    }

    Producto *p = &productos[index];
    printf("Modificar producto: %s\n", p->nombre);
    printf("Ingrese nuevo tiempo de fabricacion: ");
    scanf("%d", &p->tiempo_fabricacion);
    printf("Ingrese nuevos recursos necesarios: ");
    scanf("%d", &
