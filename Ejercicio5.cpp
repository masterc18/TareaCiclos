/*Se requiere un programa para determinar el promedio de la las n notas de 
n estudiantes y al final determinar el promedio más alto. Utilice el ciclo apropiado.
Considere la opción salir, la cual retorna al menú principal.
*/

#include <iostream>

using namespace std;

void NP(){
     int n, i, j;
    float nota, promedio, promedioMaximo = 0;
    
    while (true) {
        cout << "Ingrese el número de estudiantes (o escriba 'salir' para finalizar): ";
        cin >> n;
        
        if (cin.fail()) {
            cout << "¡Hasta luego!" << endl;
            break;
        }
        
        promedioMaximo = 0;
        
        for (i = 1; i <= n; i++) {
            promedio = 0;
            
            for (j = 1; j <= n; j++) {
                cout << "Ingrese la nota " << j << " del estudiante " << i << ": ";
                cin >> nota;
                promedio += nota;
            }
            
            promedio /= n;
            
            if (promedio > promedioMaximo) {
                promedioMaximo = promedio;
            }
        }
        
        cout << "El promedio más alto es: " << promedioMaximo << endl;
    }
}

void NPM(){
     int opcion;
    do
    {
        system("cls");
        system("color 03");
        cout << "========================Bienvenido a las calificaciones===================== " << endl;
        cout << "1. Ver los promedios " << endl;
        cout << "2. Salir " << endl;
        cout << "Dime una opcion " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            NP();
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