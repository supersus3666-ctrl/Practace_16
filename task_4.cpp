#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите N: ";
    cin >> n;

    int A[10][10], B[10][10];
    cout << "Введите матрицу " << n << "x" << n << ":" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> A[i][j];
        }
    }

    int diagSum = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            int value = A[i][j];
            bool mainDiag = (i == j);
            bool sideDiag = (i + j == n - 1);

            if (mainDiag) 
            {
                diagSum += value;
                value = value * 2;
            }
            if (sideDiag) 
            {
                value = value + 10;
            }
            B[i][j] = value;
        }
    }

    cout << "Матрица B:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Сумма главной диагонали: " << diagSum << endl;
    return 0;
}