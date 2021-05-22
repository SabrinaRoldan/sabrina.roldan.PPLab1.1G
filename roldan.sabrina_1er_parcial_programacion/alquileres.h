#include "fecha.h"
#include "cliente.h"
#include "juego.h"

#ifndef ALQUILERES_H_INCLUDED
#define ALQUILERES_H_INCLUDED

typedef struct{
    int codigo;
    int idJuego;
    int idCliente;
    eFecha fecha;
    int isEmpty;
}eAlquileres;

#endif // ALQUILERES_H_INCLUDED

/** \brief                          Inicializa todos los alquileres con el campo isEmpty en true
 *
 * \param alquileres[] eAlquileres  Array de alquileres.
 * \param tam int                   Tamaño correspondiente al array alquileres.
 * \return void                     No retorna ningún valor.
 *
 */
void inicializarAlquileres(eAlquileres alquileres[],int tam);

/** \brief                          Recorre el array y al encontrar el primer alquiler con el campo isEmpty en
 *                                  true retorna el índice de este.
 *
 * \param alquileres[] eAlquileres  Array de alquileres.
 * \param tam int                   Tamaño correspondiente al array alquileres.
 * \return int                      Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int buscarLibreAlquileres(eAlquileres alquileres[],int tam);

/** \brief                          Toma los datos ingresados por el usuario, al analizarlos y estos cumplir las condiciones
 *                                  necesarias de una estructura alquiler lo retorna al espacio de memoria del puntero
 *                                  para el alta en el sistema.
 *
 * \param alquileres[] eAlquileres  Array de alquileres.
 * \param tama int                  Tamaño del array alquileres.
 * \param clientes[] eCliente       Array de clientes.
 * \param tam int                   Tamaño del array clientes.
 * \param juegos[] eJuego           Array de juegos.
 * \param tamJ int                  Tamaño del array juegos.
 * \param categorias[] eCategoria   Array de categorias.
 * \param tamC int                  Tamaño del array categorias.
 * \param localidades[] eLocalidad  Array de localidades.
 * \param tamLoc int                Tamaño del array localidades.
 * \param pIdAlquileres int*        Puntero al espacio memoria donde se dejará el resultado de la función.
 * \return int                      Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int altaAlquileres(eAlquileres alquileres[],int tama,eCliente clientes[],int tam,eJuego juegos[]
                   ,int tamJ,eCategoria categorias[],int tamC
                   ,eLocalidad localidades[],int tamLoc, int* pIdAlquileres);

/** \brief                          Muestra la información de un alquiler.
 *
 * \param unAlquiler eAlquileres    Estructura de alquileres.
 * \param clientes[] eCliente       Array de clientes.
 * \param tam int                   Tamaño del array clientes.
 * \param juegos[] eJuego           Array de juegos.
 * \param tamJ int                  Tamaño del array juegos.
 * \param categorias[] eCategoria   Array de categorias.
 * \param tamC int                  Tamaño del array categorias.
 * \return void                     No retorna ningún valor.
 *
 */
void mostrarAlquiler(eAlquileres unAlquiler,eCliente clientes[],int tam,eJuego juegos[],int tamJ,eCategoria categorias[],int tamC);

/** \brief                          Recorre el array y muestra la información de todos los alquileres.
 *
 * \param alquileres[] eAlquileres  Array de alquileres.
 * \param tama int                  Tamaño del array alquileres.
 * \param clientes[] eCliente       Array de clientes.
 * \param tamC int                  Tamaño del array clientes.
 * \param juegos[] eJuego           Array de juegos.
 * \param tamJ int                  Tamaño del array juegos.
 * \param categorias[] eCategoria   Array de categorias.
 * \param tamCat int                Tamaño del array categorias.
 * \return void                     No retorna ningún valor.
 *
 */
void mostrarAlquileres(eAlquileres alquileres[],int tama,eCliente clientes[],int tamC,eJuego juegos[],int tamJ
                       ,eCategoria categorias[],int tamCat);

/** \brief                          Recorre el array y muestra la información de todos los alquileres relacionados
 *                                  a un cliente.
 *
 * \param alquileres[] eAlquileres  Array de alquileres.
 * \param tama int                  Tamaño del array alquileres.
 * \param clientes[] eCliente       Array de clientes.
 * \param tamC int                  Tamaño del array clientes.
 * \param juegos[] eJuego           Array de juegos.
 * \param tamJ int                  Tamaño del array juegos.
 * \param categorias[] eCategoria   Array de categorias.
 * \param tamCat int                Tamaño del array categorias.
 * \param eLocalidad localidades[]  Array de localidades.
 * \param tamLoc int                Tamaño del array localidades.
 * \return void                     No retorna ningún valor.
 *
 */
void mostrarAlquileresCliente(eAlquileres alquileres[],int tama,eCliente clientes[],int tamC,eJuego juegos[],int tamJ
                              ,eCategoria categorias[],int tamCat,eLocalidad localidades[],int tamLoc);

/** \brief                      	Hardcodea un array de alquileres con datos.
 *
 * \param alquileres[] eAlquileres	Array de alquileres.
 * \param tam int               	Tamaño correspondiente al array alquileres.
 * \param cant int             		Cantidad aceptada a mostrar.
 * \param pLegajo int*          	Puntero al espacio memoria donde se dejará el resultado de la función.
 * \return int                  	Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int hardcodearAlquileres(eAlquileres alquileres[],int tam, int cant,int* pId);

/** \brief                          Toma el id ingresado por el usuario, al analizarlo y encontrar el espacio ocupado
 *                                  consulta para dar de baja al alquiler. Al confirma la baja inicializa el campo isEmpty a true.
 *
 * \param lista[] eAlquileres       Array de alquileres.
 * \param tama int                  Tamaño correspondiente al array alquileres.
 * \param clientes[] eCliente       Array de clientes.
 * \param tamC int                  Tamaño correspondiente al array clientes.
 * \param juegos[] eJuego           Array de juegos.
 * \param tamJ int                  Tamaño correspondiente al array juegos.
 * \param categorias[] eCategoria   Array de categorias.
 * \param tamCat int                Tamaño correspondiente al array categorias.
 * \return int                      Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int bajaAlquiler(eAlquileres lista[], int tama,eCliente clientes[],int tamC,eJuego juegos[],int tamJ,eCategoria categorias[],int tamCat);

/** \brief                          Busca un alquiler al comparar con el id ingresado.
 *
 * \param lista[] eAlquileres       Array de alquileres.
 * \param tam int                   Tamaño correspondiente al array alquileres.
 * \param codigo int                Entero ingresado a comparar.
 * \return int                      Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int buscarAlquiler(eAlquileres lista[],int tam, int codigo);
