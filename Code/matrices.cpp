#include <iostream>

using namespace std;

int main()
{
    int A[2][2];
    int B[2][2];
    int C[2][2];

    cout << "Ingrese los valores de la matriz A\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Ingrese los valores de la matriz B\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "A - B = \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
            if (j == 1)
            {
                cout << "\n";
            }
        }
    }
    cout << "\nB - A = \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = B[i][j] - A[i][j];
            cout << C[i][j] << " ";
            if (j == 1)
            {
                cout << "\n";
            }
        }
    }
    cout << "\n2A + 3B = \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = 2*B[i][j] + 3*A[i][j];
            cout << C[i][j] << " ";
            if (j == 1)
            {
                cout << "\n";
            }
        }
    }
    return 0;
}