#include "categoria.h"

#ifndef JUEGO_H_INCLUDED
#define JUEGO_H_INCLUDED

typedef struct{
    int codigo;
    char descripcion[51];
    float importe;
    int idCategoria;
}eJuego;



#endif // JUEGO_H_INCLUDED

/** \brief                      	    Hardcodea un array de juegos con datos.
 *
 * \param juegos[] eJuego	            Array de juegos.
 * \param tam int               	    Tamaño correspondiente al array juegos.
 * \param cant int             		    Cantidad aceptada a mostrar.
 * \return int                  	    Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int hardcodearJuegos(eJuego juegos[],int tam, int cant);

/** \brief                              Muestra la información de un juego con la descripcion de la categoria.
 *
 * \param unJuego eJuego                Estructura de juego.
 * \param categorias[] eCategoria       Array de categorias.
 * \param tam int                       Tamaño del array categorias.
 * \return void                         No retorna ningún valor.
 *
 */
void mostrarJuego(eJuego unJuego, eCategoria categorias[],int tam);

/** \brief                              Muestra la información de todos los juego con la descripcion de las categorias.
 *
 * \param juegos[] eJuego               Array de juegos.
 * \param tam int                       Tamaño del array juegos.
 * \param categorias[] eCategoria       Array de categorias.
 * \param tamC int                      Tamaño del array categorias.
 * \return void                         No retorna ningún valor.
 *
 */
void mostrarJuegos(eJuego juegos[],int tam, eCategoria categorias[],int tamC);

/** \brief                              Busca un juego al comparar con el codigo ingresado.
 *
 * \param juegos[] eJuego               Array de juegos.
 * \param tam int                       Tamaño correspondiente al array juegos.
 * \param codigo int                    Entero ingresado a comparar.
 * \return int                          Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int buscarJuego(eJuego juegos[],int tam, int codigo);

/** \brief                              Recorre el array juegos. Al encontrar el codigo ingresado y teniendo el campo isEmpty en
 *                                      false, carga la descripcion correspondiente en la variable.
 *
 * \param codigo int                    Entero ingresado a comparar.
 * \param juegos[] eJuego               Array de juegos.
 * \param tam int                       Tamaño correspondiente al array juegos.
 * \param descripcion[] char            Cadena de caracteres donde se copia la descripcion buscada.
 * \return int                          Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int cargarDescripcionJuego(int codigo,eJuego juegos[], int tam, char descripcion[]);

/** \brief                              Recorre el array juegos. Al encontrar el codigo ingresado y teniendo el campo isEmpty en
 *                                      false, carga la descripcion de la categoria correspondiente en la variable.
 *
 * \param codigo int                    Entero ingresado a comparar.
 * \param juegos[] eJuego               Array de juegos.
 * \param tam int                       Tamaño correspondiente al array juegos.
 * \param categorias[] eCategoria       Array de cattegorias.
 * \param tamC int                      Tamaño correspondiente al array categorias.
 * \param descripcion[] char            Cadena de caracteres donde se copia la descripcion buscada.
 * \return int                          Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int cargarDescripcionJuegoCategoria(int codigo,eJuego juegos[], int tam,eCategoria categorias[],int tamC, char descripcion[]);
