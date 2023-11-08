#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");
    int n;
    cout << "Введите размер последовательности: ";
    cin >> n;

    if (n <= 0) {
        cout << "Размер последовательности должен быть положительным числом." << endl;
        return 1;
    }

    int min, count;
    cout << "Введите элементы последовательности:" << endl;
    cin >> min;
    count = 1;

    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;

        if (num < min) {
            min = num;
            count = 1;
        }
        else if (num == min) {
            count++;
        }
    }

    cout << "Минимальное число: " << min << endl;
    cout << "Количество повторений: " << count << endl;

    return 0;
}