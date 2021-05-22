#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "localidad.h"

//Valores a hardcodear.
int idLocalidad[5]={700,701,702,703,704};

char descripcionLocalidad[5][20]={
    "Avellaneda"
    ,"Wilde"
    ,"Quilmes"
    ,"San Justo"
    ,"Ciudad Evita"
};

/***********************************************************************/

int hardcodearLocalidad(eLocalidad localidades[],int tam, int cant)
{
    int total=0;

    if(localidades!=NULL && tam>0 && cant >= 0 && cant<=tam)
    {
        for(int i=0;i<cant;i++)
        {
             localidades[i].id=idLocalidad[i];
             strcpy(localidades[i].descripcion,descripcionLocalidad[i]);
             total++;
        }
    }
    return 1;
}

void mostrarLocalidad(eLocalidad unaLocalidad)
{
    printf("             %3d                   %10s\n",unaLocalidad.id,unaLocalidad.descripcion);

}

void mostrarLocalidads(eLocalidad localidades[],int tam)
{
    printf("\n ---------------------------------------------------------------\n");
    printf("                  Lista de Localidades\n");
    printf("              Id                  Descripcion");
    printf("\n ---------------------------------------------------------------\n");

    for(int i=0;i<tam;i++)
    {
        mostrarLocalidad(localidades[i]);
    }

    printf("\n\n");
}

int buscarLocalidad(eLocalidad localidades[],int tam, int id)
{
    int indice=-1;

    if(localidades!=NULL && tam>0)
    {
        for(int i=0;i<tam;i++)
       {
           if(localidades[i].id==id)
           {
               indice=i;
               break;
           }
       }
    }
    return indice;
}

int cargarDescripcionLocalidad(int id,eLocalidad localidades[], int tam, char descripcion[])
{
    int retorno=0;

    if(id>=700 && id<=704 && localidades!=NULL && tam>0 && descripcion!=NULL)
    {
        for(int i=0;i<tam;i++)
        {
            if(localidades[i].id==id)
            {
                strcpy(descripcion,localidades[i].descripcion);
                retorno=1;
                break;
            }
        }
    }

    return retorno;

}
