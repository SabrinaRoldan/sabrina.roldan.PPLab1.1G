#ifndef INFORMES_H_INCLUDED
#define INFORMES_H_INCLUDED



#endif // INFORMES_H_INCLUDED

void mostrarJuegosCategoriaMesa(eJuego juegos[],int tamJ,eCategoria categorias[],int tamC);

void alquileresPorCliente(eAlquileres alquileres[],int tama,eCliente clientes[], int tamC,eJuego juegos[]
                          ,int tamJ,eCategoria categorias[],int tamCat);

void totalAlquileresCliente(eAlquileres alquileres[],int tama,eCliente clientes[],int tamC,eJuego juegos[],int tamJ
                            ,eCategoria categorias[],int tamCat);

void juegosSinAlquiler(eAlquileres alquileres[],int tama,eCliente clientes[],int tamC,eJuego juegos[],int tamJ
                            ,eCategoria categorias[],int tamCat);
