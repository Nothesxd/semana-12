#ifndef ORDEN_TRABAJO_H
#define ORDEN_TRABAJO_H

#include "productos.h"

#define MAX_ORDENES 100

typedef struct {
    char nombre_producto[50];
    int cantidad_demandada;
    int tiempo_total;
    int recursos_totales;
} OrdenTrabajo;

extern OrdenTrabajo ordenes[MAX_ORDENES];
extern int num_ordenes;
extern int tiempo_disponible;
extern int recursos_disponibles;

void ingresar_orden_trabajo();
void consultar_orden_trabajo();
void mostrar_resultados();
int buscar_orden(const char *nombre_producto);

#endif // ORDEN_TRABAJO_H
