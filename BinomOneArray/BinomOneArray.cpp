#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n, k = 0;
    double i = 1;
    cout << "Введите нижний индекс коэффициэнтов n: ";
    cin >> n;
    while (k < n) {
        cout << i << ", ";
        i *= (double)(n - k) / (k + 1);
        k++;
    }
    cout << i << ".";
    system("pause > nul");
    return 0;
}
