#include <iostream>
#include <string>
using namespace std;
void MostrarMatriz(int filas, int columnas);
int main()
{
	int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
    MostrarMatriz(filas, columnas);
    return 0;
}

void MostrarMatriz(int filas, int columnas)
{
	string matriz [filas][columnas];
	string alt = "L";
    for (int i = 0; i < filas; ++i)
	{
        for (int j = 0; j < columnas; ++j)
		{
            matriz[i][j] = alt;
            alt = (alt == "L") ? "O" : "L";
        }
    }
    for (int i = 0; i < filas; ++i)
	{
        for (int j = 0; j < columnas; ++j)
		{
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}