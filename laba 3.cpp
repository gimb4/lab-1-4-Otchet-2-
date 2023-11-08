#include <iostream>
using namespace std;

int main() {

    setlocale(LC_ALL,"Russian");

    const int arraySize = 10; 
    int array[arraySize];

    
    for (int i = 0; i < arraySize; i++) {
        array[i] = rand() % 100; 
    }

   
    cout << "Содержимое массива: ";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int count = 0;
    int sum = 0;

    for (int i = 0; i < arraySize; i++) {
        if (array[i] % 3 == 0) {
            count++;
            sum += array[i];
        }
    }

    cout << "Количество чисел в массиве: " << count << endl;
    cout << "Сумма элементов, кратных 3: " << sum << endl;

    return 0;
}