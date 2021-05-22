#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "juego.h"
#include "categoria.h"
#include "localidad.h"

//Valores a hardcodear.
int codigoJuego[5]={200,201,202,203,204};

char descripcionJuego[5][20]={
    "Cartas"
    ,"Monopoly"
    ,"Ajedrez"
    ,"Dados"
    ,"Galera"
};

float importeJuego[5]={100.00,150.00,190.00,100.00,140.00};

int idCategoriasJuegos[5]={103,100,102,101,104};

/***********************************************************************/

int hardcodearJuegos(eJuego juegos[],int tam, int cant)
{
    int total=0;

    if(juegos!=NULL && tam>0 && cant >= 0 && cant<=tam)
    {
        for(int i=0;i<cant;i++)
        {
             juegos[i].codigo=codigoJuego[i];
             strcpy(juegos[i].descripcion,descripcionJuego[i]);
             juegos[i].importe=importeJuego[i];
             juegos[i].idCategoria=idCategoriasJuegos[i];
             total++;
        }
    }
    return 1;
}

void mostrarJuego(eJuego unJuego, eCategoria categorias[],int tam)
{
    char descripcion[20];

    if(cargarDescripcionCategoria(unJuego.idCategoria,categorias,tam,descripcion))
    {
        printf("             %3d      %10s      %.2f           %3d      %10s\n"
               ,unJuego.codigo
               ,unJuego.descripcion
               ,unJuego.importe
               ,unJuego.idCategoria
               ,descripcion);
    }
    else
    {
       printf("Error al cargar la descripcion de la categoria\n");
    }


}

void mostrarJuegos(eJuego juegos[],int tam, eCategoria categorias[],int tamC)
{
    printf("\n --------------------------------------------------------------------------------------\n");
    printf("                                Lista de Juegos\n");
    printf("          Codigo     Descripcion     Importe    idCategoria    Descripcion");
    printf("\n --------------------------------------------------------------------------------------\n");

    for(int i=0;i<tam;i++)
    {
        mostrarJuego(juegos[i],categorias,tamC);
    }

    printf("\n\n");
}

int buscarJuego(eJuego juegos[],int tam, int codigo)
{
    int indice=-1;

    if(juegos!=NULL && tam>0)
    {
        for(int i=0;i<tam;i++)
       {
           if(juegos[i].codigo==codigo)
           {
               indice=i;
               break;
           }
       }
    }
    return indice;
}

int cargarDescripcionJuego(int codigo,eJuego juegos[], int tam, char descripcion[])
{
    int retorno=0;

    if(codigo>=200 && codigo<=204 && juegos!=NULL && tam>0 && descripcion!=NULL)
    {
        for(int i=0;i<tam;i++)
        {
            if(juegos[i].codigo==codigo)
            {
                strcpy(descripcion,juegos[i].descripcion);
                retorno=1;
                break;
            }
        }
    }

    return retorno;

}

int cargarDescripcionJuegoCategoria(int codigo,eJuego juegos[], int tam
                                    ,eCategoria categorias[],int tamC, char descripcion[])
{
    int retorno=0;
    char descripcionCategoria[20];

    if(codigo>=200 && codigo<=204 && juegos!=NULL && tam>0 && descripcion!=NULL)
    {
        for(int i=0;i<tam;i++)
        {
            if(juegos[i].codigo==codigo)
            {
                cargarDescripcionCategoria(juegos[i].idCategoria,categorias,tamC,descripcionCategoria);
                strcpy(descripcion,descripcionCategoria);
                retorno=1;
                break;
            }
        }
    }

    return retorno;

}
