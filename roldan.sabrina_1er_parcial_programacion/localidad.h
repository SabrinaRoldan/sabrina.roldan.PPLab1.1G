#ifndef LOCALIDAD_H_INCLUDED
#define LOCALIDAD_H_INCLUDED

typedef struct{
    int id;
    char descripcion[20];

}eLocalidad;

#endif // LOCALIDAD_H_INCLUDED

int hardcodearLocalidad(eLocalidad localidades[],int tam, int cant);

void mostrarLocalidad(eLocalidad unaLocalidad);

void mostrarLocalidads(eLocalidad localidades[],int tam);

int buscarLocalidad(eLocalidad localidades[],int tam, int id);

int cargarDescripcionLocalidad(int id,eLocalidad localidades[], int tam, char descripcion[]);
