#include <iostream>

using namespace std;

float star()
{
    float star;
    cout << "Gracias por probar este programa, agradeceria su opinion con una calificacion " << endl;
    cout << "Diga su calificacion " << endl;
    cin >> star;

    if (star < 5)
    {
        cout << "La calificacion es mala, hay que mejorar " << endl;
    }
    else
    {
        cout << "La calificacion es buena " << endl;
    }
}

