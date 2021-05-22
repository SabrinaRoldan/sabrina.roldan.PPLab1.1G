#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "categoria.h"

//Valores a hardcodear.
int idCategorias[5]={100,101,102,103,104};

char descripcionCategoria[5][20]={
    "Mesa"
    ,"Azar"
    ,"Estrategia"
    ,"Salon"
    ,"Magia"
};

/***********************************************************************/

int hardcodearCategorias(eCategoria categorias[],int tam, int cant)
{
    int total=0;

    if(categorias!=NULL && tam>0 && cant >= 0 && cant<=tam)
    {
        for(int i=0;i<cant;i++)
        {
             categorias[i].id=idCategorias[i];
             strcpy(categorias[i].descipcion,descripcionCategoria[i]);
             total++;
        }
    }
    return 1;
}

void mostrarCategoria(eCategoria unaCategoria)
{
    printf("             %3d                   %10s\n",unaCategoria.id,unaCategoria.descipcion);

}

void mostrarCategorias(eCategoria categorias[],int tam)
{
    printf("\n ---------------------------------------------------------------\n");
    printf("                  Lista de Categorias\n");
    printf("              Id                  Descripcion");
    printf("\n ---------------------------------------------------------------\n");

    for(int i=0;i<tam;i++)
    {
        mostrarCategoria(categorias[i]);
    }

    printf("\n\n");
}

int buscarCategoria(eCategoria categorias[],int tam, int id)
{
    int indice=-1;

    if(categorias!=NULL && tam>0)
    {
        for(int i=0;i<tam;i++)
       {
           if(categorias[i].id==id)
           {
               indice=i;
               break;
           }
       }
    }
    return indice;
}

int cargarDescripcionCategoria(int id,eCategoria categorias[], int tam, char descripcion[])
{
    int retorno=0;

    if(id>=100 && id<=104 && categorias!=NULL && tam>0 && descripcion!=NULL)
    {
        for(int i=0;i<tam;i++)
        {
            if(categorias[i].id==id)
            {
                strcpy(descripcion,categorias[i].descipcion);
                retorno=1;
                break;
            }
        }
    }

    return retorno;

}
