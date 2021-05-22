#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "juego.h"
#include "categoria.h"
#include "cliente.h"
#include "alquileres.h"
#include "roldan.h"

#include "informes.h"


void mostrarJuegosCategoriaMesa(eJuego juegos[],int tamJ,eCategoria categorias[],int tamC)
{
    system("cls");
    printf("\n --------------------------------------------------------------------------------------\n");
    printf("                              Lista de Juegos Categoria Mesa\n");
    printf("          Codigo     Descripcion     Importe    idCategoria    Descripcion");
    printf("\n --------------------------------------------------------------------------------------\n");

        for(int i=0;i<tamJ;i++)
        {
            if(juegos[i].idCategoria==100)
            {
                mostrarJuego(juegos[i],categorias,tamC);
            }
        }

    printf("\n\n");
}

void alquileresPorCliente(eAlquileres alquileres[],int tama,eCliente clientes[], int tamC,eJuego juegos[]
                          ,int tamJ,eCategoria categorias[],int tamCat)
{
    int flag=1;
    int id;

    system("cls");
    if(!utn_getUnsignedInt("Ingrese el codigo del cliente a buscar: ","Error. ",1,4,300,304,4,&id))
    {
        printf("Dato ingresado no valido.\n");
    }

    printf("\n ---------------------------------------------------------------------------------------------------------\n");
    printf("                                        Lista de Alquileres por cliente");
    printf("\n ---------------------------------------------------------------------------------------------------------\n");
    printf("   Codigo    idCliente         Nombre        Apellido    idJuego   Descripcion      Categoria      Fecha ");
    printf("\n ---------------------------------------------------------------------------------------------------------\n");

    for(int i=0;i<tama;i++)
    {
        if(alquileres[i].idCliente==id)
        {
        mostrarAlquiler(alquileres[i],clientes,tamC,juegos,tamJ,categorias,tamCat);
        flag=0;
        }
    }
    if(flag)
    {
        printf("No hay alquileres disponibles para el cliente seleccionado");
    }

    printf("\n\n");
}

void totalAlquileresCliente(eAlquileres alquileres[],int tama,eCliente clientes[],int tamC,eJuego juegos[],int tamJ
                            ,eCategoria categorias[],int tamCat)
{
    float total=0;
    int flag=1;
    int id;

    system("cls");

    printf("\n ---------------------------------------------------------------------------------------------------------\n");
    printf("                                        Total de Alquileres por cliente");
    printf("\n ---------------------------------------------------------------------------------------------------------\n");

    if(!utn_getUnsignedInt("Ingrese el codigo del cliente a buscar: ","Error. ",1,4,300,304,4,&id))
    {
        printf("Dato ingresado no valido.\n");
    }



    printf("\n ---------------------------------------------------------------------------------------------------------\n");
    printf("                                           Lista de Alquileres");
    printf("\n ---------------------------------------------------------------------------------------------------------\n");
    printf("   Codigo    idCliente         Nombre        Apellido    idJuego   Descripcion      Categoria      Fecha ");
    printf("\n ---------------------------------------------------------------------------------------------------------\n");

    for(int i=0;i<tama;i++)
    {
        if(alquileres[i].idCliente==id)
        {
            mostrarAlquiler(alquileres[i],clientes,tamC,juegos,tamJ,categorias,tamCat);
            for(int j=0;j<tamJ;j++)
            {
                if(alquileres[i].idJuego==juegos[j].codigo)
                {
                    total+=juegos[j].importe;
                }
            }

            flag=0;
        }
    }

    printf("\nEl importe total correspondiente al cliente es: %.2f",total);
    if(flag)
    {
        printf("No hay alquileres disponibles para el cliente seleccionado");
    }

    printf("\n\n");


}

void juegosSinAlquiler(eAlquileres alquileres[],int tama,eCliente clientes[],int tamC,eJuego juegos[],int tamJ
                            ,eCategoria categorias[],int tamCat)
{

    int indice;
    system("cls");

    printf("\n ---------------------------------------------------------------------------------------------------------\n");
    printf("                                           Juegos sin Alquileres");
    printf("\n ---------------------------------------------------------------------------------------------------------\n");

    for(int i=0;i<tama;i++)
    {
        for(int j=0;j<tamJ;i++)
        {
            if(alquileres[i].idJuego!=juegos[j].codigo)
            {
                indice=j;
            }
        }
        mostrarJuego(juegos[indice],categorias,tamCat);
    }

    printf("\n\n");
}


