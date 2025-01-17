#ifndef PRODUCTOS_H
#define PRODUCTOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTOS 100

typedef struct {
    char nombre[50];
    int tiempo_fabricacion; // En minutos
    int recursos_necesarios; // Ejemplo: cantidad de recursos
    int cantidad_stock;
} Producto;

extern Producto productos[MAX_PRODUCTOS];
extern int num_productos;

void ingresar_producto();
void comprar_producto();
void consultar_producto();
void mostrar_productos();
void modificar_producto();
void eliminar_producto();
void guardar_archivo();
void cargar_archivo();
int buscar_producto(const char *nombre);

#endif // PRODUCTOS_H
