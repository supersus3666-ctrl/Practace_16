#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n, k;
    cout << "¬ведите N: ";
    cin >> n;

    int arr[100];
    cout << "¬ведите " << n << " чисел: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "¬ведите k: ";
    cin >> k;
    k = k % n;

    int result[100];
    for (int i = 0; i < n; i++) 
    {
        result[(i + k) % n] = arr[i];
    }

    cout << "–езультат: ";
    for (int i = 0; i < n; i++) 
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}