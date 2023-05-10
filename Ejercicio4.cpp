/*Se requiere un programa para determinar cuánto ahorrará una persona en
un año, si al final de cada mes deposita variables cantidades de dinero; además, se
requiere saber cuánto lleva ahorrado cada mes. Utilice el ciclo apropiado. Considere la
opción salir, la cual retorna al menú principal.
*/

#include <iostream>

using namespace std;

void aH()
{
    float ahorroI, AhorroM[12], AhorroT;
    cout << "Dime tus ahorros " << endl;
    cin >> ahorroI;

    for (int i = 0; i <= 12; i++)
    {
        cout << "Ingrese tus ahorros del mes " << endl;
        cin >> AhorroM[i];
    }

    AhorroT = ahorroI;
    cout << "Ahorro en C$" << ahorroI << "al inicio del año, los ahorros fueron " << endl;
    for (int i = 0; i <= 12; i++)
    {
        AhorroT += AhorroM[i];
        cout << "Mes " << i + 1 << ":C$ " << AhorroT << endl;
    }
}
void MA()
{
    int opcion;
    do
    {
        system("cls");
        system("color 03");
        cout << "========================Bienvenido a tu almacen de ahorros===================== " << endl;
        cout << "1. Ver los ahorros " << endl;
        cout << "2. Salir " << endl;
        cout << "Dime una opcion " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            aH();
            break;
        case 2:
            cout << "Saliendo " << endl;
            break;

        default:
        cout << "opcion invalida " << endl;
            break;
        }
        system("pause");
    } while (opcion != 2);
}
