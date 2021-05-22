#include <stdio.h>
#include <stdlib.h>
#include "roldan.h"
#include "categoria.h"
#include "cliente.h"
#include "alquileres.h"
#include "juego.h"
#include "informes.h"

#define TAM_CAT 5
#define TAM_CLIENTE 5
#define TAM_ALQUILERES 5
#define TAM_JUEGOS 5
#define TAM_LOCALIDAD 5

int main()
{
    eCliente clientes[TAM_CLIENTE];
    eAlquileres alquileres[TAM_ALQUILERES];
    eJuego juegos[TAM_JUEGOS];
    eCategoria categorias[TAM_CAT];
    eLocalidad localidades[TAM_LOCALIDAD];
    char seguir='s';

    int nextIdCliente=300;
    int nextIdAlquileres=400;

    inicializarClientes(clientes,TAM_CLIENTE);
    inicializarAlquileres(alquileres,TAM_ALQUILERES);
    hardcodearClientes(clientes,TAM_CLIENTE,5,&nextIdCliente);
    hardcodearAlquileres(alquileres,TAM_ALQUILERES,5,&nextIdAlquileres);
    hardcodearJuegos(juegos,TAM_JUEGOS,5);
    hardcodearCategorias(categorias,TAM_CAT,5);
    hardcodearLocalidad(localidades,TAM_LOCALIDAD,5);

    //system("pause");
   do
    {
        switch(menu())
        {
            case 1:
                altaCliente(clientes,TAM_CLIENTE,&nextIdCliente);
                break;

            case 2:
                modificarCliente(clientes,TAM_CLIENTE,localidades,TAM_LOCALIDAD);
                break;

            case 3:
                bajaCliente(clientes,TAM_CLIENTE,localidades,TAM_LOCALIDAD);
                break;

            case 4:
                ordenarClientes(clientes,TAM_CLIENTE);
                mostrarClientes(clientes,TAM_CLIENTE,localidades,TAM_LOCALIDAD);
                break;

            case 5:
                altaAlquileres(alquileres,TAM_ALQUILERES,clientes,TAM_CLIENTE,juegos,TAM_JUEGOS,categorias,TAM_CAT
                               ,localidades,TAM_LOCALIDAD,&nextIdAlquileres);
                break;

            case 6:
                mostrarAlquileres(alquileres,TAM_ALQUILERES,clientes,TAM_CLIENTE,juegos,TAM_JUEGOS,categorias,TAM_CAT);
                break;

            case 7:
                mostrarJuegosCategoriaMesa(juegos,TAM_JUEGOS,categorias,TAM_CAT);
                break;

            case 8:
                alquileresPorCliente(alquileres,TAM_ALQUILERES,clientes,TAM_CLIENTE,juegos,TAM_JUEGOS,categorias,TAM_CAT);
                break;

            case 9:
                totalAlquileresCliente(alquileres,TAM_ALQUILERES,clientes,TAM_CLIENTE,juegos,TAM_JUEGOS,categorias,TAM_CAT);
                break;

            case 10:

                break;

            case 11:
                juegosSinAlquiler(alquileres,TAM_ALQUILERES,clientes,TAM_CLIENTE,juegos,TAM_JUEGOS,categorias,TAM_CAT);
                break;

            case 12:
                seguir='n';
                break;

            default:
                printf("Opcion no valida\n");
                fflush(stdin);
                break;

        }
        system("pause");

    }while(seguir=='s');

    return 0;
}
