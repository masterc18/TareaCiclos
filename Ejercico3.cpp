/*: Se requiere un programa para obtener la estatura promedio de un grupo de
personas, cuyo número de miembros se desconoce, el ciclo debe efectuarse siempre y
cuando se tenga una estatura registrada. Utilice el ciclo apropiado. Considere la opción
salir, la cual retorna al menú principal.*/

#include <iostream>

using namespace std;

void altura()
{
    int contar = 0;
    double sum = 0.0;
    double altura;

    while (true)
    {
        cout << "Ingrese la estatura de la persona (o ingrese '0' para salir): ";
        cin >> altura;

        if (altura == 0)
        {
            break;
        }

        sum += altura;
        contar++;
    }

    if (contar > 0)
    {
        double promedio = sum / contar;
        cout << "La estatura promedio es: " << promedio << endl;
    }
    else
    {
        cout << "No se ingresaron estaturas." << endl;
    }
}

void ME()
{
    int opcion;
    do
    {
        system("cls");
        system("color 02");
        cout << "===========================Bienvenido al programa de estatura===================== " << endl;
        cout << "1. Ver altura " << endl;
        cout << "2. Salir " << endl;
        cout << "Dime una opcion " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            altura();
            break;
            case 2:
            cout << "Saliendo......... " << endl;
            break;
        
        default:
        cout << "opcion invalida " << endl;
            break;
        }
        system("pause");
    } while (opcion != 2);
}