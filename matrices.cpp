/// Matrices en C++.

/// ¿Qué son las matrices?
/*
    Una matriz es una estructura de datos bidimensional, organizada en filas y columnas.
    En una matriz usamos dos índices: uno para las filas y otro para las columnas.
    Los índices van desde 0 hasta n-1.
*/

/// Sintaxis.
/// ¿Cómo definimos una matriz?
/**
 * Primero definimos el tipo de dato que va a contener la matriz.
 * Le damos un nombre.
 * Asignamos un valor para el primer índice  [Cantidad de filas]
 * Asignamos un valor para el segundo índice [Cantidad de columnas]
 * EJEMPLO: int matriz[3][3];
 */

#include <iostream>
using namespace std;

int main()
{
    int matriz[3][3]; // Definición de una matriz de 3 filas y 3 columnas.
    int variableAuxiliar = 0;

    // Rellenamos la matriz con valores del 0 al 8.
    // Usamos dos bucles for anidados: uno para filas y otro para columnas.

    for (int i = 0; i < 3; i++)
    { // Filas
        for (int j = 0; j < 3; j++)
        {                                    // Columnas
            matriz[i][j] = variableAuxiliar; // Asignamos el valor actual.
            variableAuxiliar++;              // Incrementamos el valor auxiliar.
        }
    }

    // Mostramos los datos de la matriz.
    for (int i = 0; i < 3; i++)
    { // Filas
        for (int j = 0; j < 3; j++)
        { // Columnas
            cout << matriz[i][j] << " ";
        }
    }
    return 0;
}