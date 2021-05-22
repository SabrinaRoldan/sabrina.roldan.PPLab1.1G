#ifndef CATEGORIA_H_INCLUDED
#define CATEGORIA_H_INCLUDED

typedef struct{
    int id;
    char descipcion[51];
}eCategoria;


#endif // CATEGORIA_H_INCLUDED

/** \brief                      	    Hardcodea un array de categorias con datos.
 *
 * \param categorias[] eCategoria	    Array de categorias.
 * \param tam int               	    Tamaño correspondiente al array categorias.
 * \param cant int             		    Cantidad aceptada a mostrar.
 * \return int                  	    Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int hardcodearCategorias(eCategoria categorias[],int tam, int cant);

/** \brief                              Muestra la información de una categoria.
 *
 * \param unaCategoria eCategoria       Estructura de categoria.
 * \return                              No retorna ningún valor.
 *
 */
void mostrarCategoria(eCategoria unaCategoria);

/** \brief                              Recorre el array y muestra la información de todas los categorias.
 *
 * \param categorias[] eCategoria       Array de categorias.
 * \param tam int                       Tamaño del array categorias.
 * \return void                         No retorna ningún valor.
 *
 */
void mostrarcategorias(eCategoria categorias[],int tam);

/** \brief                              Busca una categoria al comparar con el id ingresado.
 *
 * \param categorias[] eCategoria       Array de categorias.
 * \param tam int                       Tamaño correspondiente al array categorias.
 * \param id int                        Entero ingresado a comparar.
 * \return int                          Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int buscarCategoria(eCategoria categorias[],int tam, int id);

/** \brief                              Recorre el array categoria. Al encontrar el codigo ingresado y teniendo el campo isEmpty en
 *                                      false, carga la descripcion correspondiente en la variable.
 *
 * \param id int                        Entero ingresado a comparar.
 * \param categorias[] eCategoria       Array de categorias.
 * \param tam int                       Tamaño correspondiente al array categorias.
 * \param descripcion[] char            Cadena de caracteres donde se copia la descripcion buscada.
 * \return int                          Retorna 1 si el dato ingresado es correcto, 0 si no lo es.
 *
 */
int cargarDescripcionCategoria(int id,eCategoria categorias[], int tam, char descripcion[]);
