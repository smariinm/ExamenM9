// ExamenM9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <thread>

using namespace std;

//Antes de nada, el programa lo creo con límites y la lógica de los pares no está como debería de ser,
//es decir, cuando buscamos pares lo correcto sería dividir el numero entre 2 para recoger el residuo
//y si el residuo no es cero significa que es impar, si da 0 es impar.

// Creamos la función para imprimir los números impares del 1 al 10, 
// empezamos en el índice 1 y vamos sumando 2 para que imprima todos los impares
void imprimirImpares() {
    for (int i = 1; i <= 10; i += 2) {
        cout << "Impar: " << i << endl;
    }
}

// Función para imprimir los números pares del 1 al 10
//empezamos con el índice 2, suponiendo que el 0 no es par, y vamos sumando 2 para que imprima todos los pares.
void imprimirPares() {
    for (int i = 2; i <= 10; i += 2) {
        cout << "Par: " << i << endl;
    }
}

int main() {
    // Creamos los hilos para juntarlos luego
    thread hilo1(imprimirImpares);
    thread hilo2(imprimirPares);
     
    // Esperar a que los hilos terminen
    hilo1.join();
    hilo2.join();

    cout << "Todos los hilos han terminado." << endl;

    return 0;

    //En el enunciado lo indica, pero recalco que, a parte de ser un orden aleatorio, hay veces que
    //se salta palabras por el acceso continuo al std::cout, entonces para solucionar esto hay librerias como Mutex,
    //que hacen la función de bloquear las salidas para que todo salga como se espera.
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
