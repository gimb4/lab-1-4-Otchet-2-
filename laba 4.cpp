#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");
    const int n = 10; 
    int X[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Введите элемент X[" << i << "]: ";
        std::cin >> X[i];
    }

    int maxElement = X[0];
    int minElement = X[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (X[i] > maxElement) {
            maxElement = X[i];
            maxIndex = i;
        }
        if (X[i] < minElement) {
            minElement = X[i];
            minIndex = i;
        }
    }

    cout << "Максимальный элемент: " << maxElement << endl;
    cout << "Индекс максимального элемента: " << maxIndex << endl;
    cout << "Минимальный элемент: " << minElement << endl;
    cout << "Индекс минимального элемента: " << minIndex << endl;

    return 0;
}

