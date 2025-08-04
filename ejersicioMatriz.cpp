/*
    Enunciado:
    Crear una matriz de 3x3.
    Pedir al usuario que ingrese 9 números (uno por cada posición).
    Mostrar la matriz en forma de tabla.
    Calcular y mostrar la suma total de todos los números de la matriz.

    **Simplificación del problema:**
    Le pedimos al usuario que rellene una matriz para mostrarla como un tablero de números.

    **Análisis:**
    - Datos de entrada:
        Variables:
        variableAuxiliar (para sumar),
        tablero (matriz)

    - Datos de salida:
        Mostramos los números en un tablero de 3x3.

    **Operación:**
        Debemos usar ciclos combinados: un `for` dentro de otro `for`.

    **Estrategia:**
    1. Le pedimos al usuario que ingrese una cantidad determinada de números.
    2. Guardamos esos números en una matriz.
    3. Mostramos esos datos en un tablero.
*/

#include <iostream>
using namespace std;

int main() {
    int tablero[3][3];
    int sumaTotal = 0;

    cout << "Tenés que ingresar 9 números (cualquier combinación):\n";

    // Pedimos los datos al usuario y los guardamos en la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> tablero[i][j];
            sumaTotal += tablero[i][j]; // Acumulamos la suma total
        }
    }

    // Mostramos la matriz como un tablero
    cout << "\nTablero de números:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tablero[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nLa suma total de los números es: " << sumaTotal << endl;

    return 0;
}
