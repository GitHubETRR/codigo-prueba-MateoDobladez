#include <stdio.h>
#include <string.h>

#define MAX_PERFUMES 100

typedef struct {
    char nombre[30];
    int Cantidad;
    float PrecioCompra;
    float PrecioVenta;
} perfume;

perfume perfumes[MAX_PERFUMES];
int cantidadPerfumes = 0;

void menu(void);
void stock(void);
void agregar(void);
void eliminar(void);
void cambiar(void);

int main() {
    menu();
    return 0;
}

void menu() {
    int opcion;
    do {
        printf("\n--- MENU DE STOCK ---\n");
        printf("1. Ver stock\n");
        printf("2. Agregar perfume\n");
        printf("3. Eliminar perfume\n");
        printf("4. Cambiar informacion\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                stock();
                printf("Presione una tecla para continuar...");
                getchar(); // Limpiar el buffer
                getchar();
                break;
            case 2:
                agregar();
                printf("Presione una tecla para continuar...");
                getchar(); // Limpiar el buffer
                getchar();
                break;
            case 3:
                eliminar();
                printf("Presione una tecla para continuar...");
                getchar(); // Limpiar el buffer
                getchar();
                break;
            case 4:
                cambiar();
                printf("Presione una tecla para continuar...");
                getchar(); // Limpiar el buffer
                getchar();
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida\n");
                printf("Presione una tecla para continuar...");
                getchar(); // Limpiar el buffer
                getchar();
                break;
        }
    } while (opcion != 5);
}

void stock() {
    printf("\n--- STOCK DE PERFUMES ---\n");
    for (int i = 0; i < cantidadPerfumes; i++) {
        printf("Nombre: %s\n", perfumes[i].nombre);
        printf("Cantidad: %d\n", perfumes[i].Cantidad);
        printf("Precio de compra: %.2f\n", perfumes[i].PrecioCompra);
        printf("Precio de venta: %.2f\n\n", perfumes[i].PrecioVenta);
    }
}

void agregar() {
    if (cantidadPerfumes < MAX_PERFUMES) {
        printf("Ingrese el nombre del perfume: ");
        scanf("%s", perfumes[cantidadPerfumes].nombre);
        printf("Ingrese la cantidad del perfume: ");
        scanf("%d", &perfumes[cantidadPerfumes].Cantidad);
        printf("Ingrese el precio de compra del perfume: ");
        scanf("%f", &perfumes[cantidadPerfumes].PrecioCompra);
        printf("Ingrese el precio de venta del perfume: ");
        scanf("%f", &perfumes[cantidadPerfumes].PrecioVenta);
        cantidadPerfumes++;
        printf("Perfume agregado con exito!\n");
    } else {
        printf("No se puede agregar mas perfumes. La lista esta llena.\n");
    }
}

void eliminar() {
    char nombre[30];
    printf("Ingrese el nombre del perfume a eliminar: ");
    scanf("%s", nombre);
    for (int i = 0; i < cantidadPerfumes; i++) {
        if (strcmp(perfumes[i].nombre, nombre) == 0) {
            for (int j = i; j < cantidadPerfumes - 1; j++) {
                perfumes[j] = perfumes[j + 1];
            }
            cantidadPerfumes--;
            printf("Perfume eliminado con exito!\n");
            return;
        }
    }
    printf("No se encontro el perfume a eliminar.\n");
}

void cambiar() {
    char nombre[30];
    printf("Ingrese el nombre del perfume a cambiar: ");
    scanf("%s", nombre);
    for (int i = 0; i < cantidadPerfumes; i++) {
        if (strcmp(perfumes[i].nombre, nombre) == 0) {
            printf("Ingrese el nuevo nombre del perfume: ");
            scanf("%s", perfumes[i].nombre);
            printf("Ingrese la nueva cantidad del perfume: ");
            scanf("%d", &perfumes[i].Cantidad);
            printf("Ingrese el nuevo precio de compra del perfume: ");
            scanf("%f", &perfumes[i].PrecioCompra);
            printf("Ingrese el nuevo precio de venta del perfume: ");
            scanf("%f", &perfumes[i].PrecioVenta);
            printf("Perfume cambiado con exito!\n");
            return;
        }
    }
    printf("No se encontro el perfume a cambiar.\n");
}