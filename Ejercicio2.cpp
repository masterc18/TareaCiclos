/*“El náufrago satisfecho” ofrece hamburguesas sencillas (S), dobles (D) y 
triples (T), las cuales tienen un costo de $20, $25 y $28 respectivamente. La empresa 
acepta tarjetas de crédito con un cargo de 5 % sobre la compra. Suponiendo que los 
clientes adquieren N hamburguesas, las cuales pueden ser de diferente tipo, realice un 
algoritmo para determinar cuánto deben pagar. Utilice el ciclo apropiado. Considere la 
opción salir, la cual retorna al menú principal.*/

#include <iostream>

using namespace std;

void HB(){
    int opcion;
    int numHamburguesas, tipoHamburguesa, precioHamburguesa;
    float precioTotal, cargoTarjeta;
    
    do {
        precioTotal = 0; 
        cout << "S - Hamburguesa sencilla ($20)" << endl;
        cout << "D - Hamburguesa doble ($25)" << endl;
        cout << "T - Hamburguesa triple ($28)" << endl;
        cout << "E - Salir" << endl;
        cin >> opcion;
        
        switch(opcion) {
            case 'S':
            case 's':
                precioHamburguesa = 20;
                break;
            case 'D':
            case 'd':
                precioHamburguesa = 25;
                break;
            case 'T':
            case 't':
                precioHamburguesa = 28;
                break;
            case 'E':
            case 'e':
                cout << "Saliendo del programa..." << endl;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                continue;
        }
        
        cout << "Ingrese la cantidad de hamburguesas a comprar: ";
        cin >> numHamburguesas;
        precioTotal = numHamburguesas * precioHamburguesa;
        cargoTarjeta = precioTotal * 0.05;
        precioTotal += cargoTarjeta;
        cout << "El precio total de su compra es: " << precioTotal << endl;
        
    } while (opcion != 'E' && opcion != 'e');
    
}

void HamM(){
    int op;
    do
    {
        system("cls");
        system("color02");
        cout << "==========================Bienvendio a MCdonals===================== " << endl;
        cout << "1. menu de hamburgesas " << endl;
        cout << "2. Salir " << endl;
        cout << "Dime una opcion " << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            HB();
            break;
        case 2:
        cout << "Saliendo................." << endl;
        default:
        cout << "opcion invalido " << endl;
            break;
        }
        system("pause");
    } while (op!=2);
    
}