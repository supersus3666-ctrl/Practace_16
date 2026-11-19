#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int m, n;
    cout << "Введите M и N (не больше 10): ";
    cin >> m >> n;

    int A[10][10];
    cout << "Введите матрицу " << m << "x" << n << ":" << endl;
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> A[i][j];
        }
    }

    int bestSum = -99999;
    int bestRow = 0;
    int zeroCount = 0;

    for (int i = 0; i < m; i++) 
    {
        int currentRowSum = 0;
        for (int j = 0; j < n; j++)
        {
            currentRowSum += A[i][j];
            if (A[i][j] == 0) 
            {
                zeroCount++;
            }
        }
        cout << "Сумма строки " << i << ": " << currentRowSum << endl;
        if (currentRowSum > bestSum) 
        {
            bestSum = currentRowSum;
            bestRow = i;
        }
    }

    cout << "Строка с максимальной суммой: " << bestRow << " (сумма " << bestSum << ")" << endl;
    cout << "Количество нулей: " << zeroCount << endl;
    return 0;
}