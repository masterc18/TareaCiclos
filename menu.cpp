#include <iostream>
#include "Ejercicio2.cpp"
#include "Ejercico3.cpp"
#include "Ejercicio4.cpp"
#include "Ejercicio5.cpp"

using namespace std;

void menuP()
{
    int opcion;
    do
    {
        system("cls");
        system("color 04");
        cout << "==========================Bienvendo al programa===================== " << endl;
        cout << "Estas son nuestras opciones " << endl;
        cout << "1. menu de hamburguesas " << endl;
        cout << "2. Ver altura " << endl;
        cout << "3. Ver Ahorros " << endl;
        cout << "4. Ver promedio " << endl;
        cout << "5. Salir " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            HamM();
            break;
        case 2:
            altura();
            break;
        case 3:
            MA();
            break;
        case 4:
            NPM();
            break;
        case 5:
            cout << "Saliendo..........." << endl;
            break;

        default:
        cout << "Opcion invalida " << endl;
            break;
        }
    } while (opcion != 6);
}