#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");
    int n;
    cout << "Введите число n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Сумма чисел от 1 до " << n << " равна " << sum << endl;

    return 0;
}