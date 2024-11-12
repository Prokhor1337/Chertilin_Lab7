#include <iostream>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

        int n;
        cout << "введіть кількість елиментів: ";
        cin >> n;
        int* arr = new int[n];

        cout << "Введіть елименти: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxsum = arr[0];
        int sum = arr[0];
        for (int i = 1; i < n; i++) {
            if (sum + arr[i] > arr[i]) {
                sum = sum + arr[i];
            }
            else {
                sum = arr[i];
            }

            if (sum > maxsum) {
                maxsum = sum;
            }
        }

        cout << "Максимальна сума підмасива: " << maxsum << endl;
        delete[] arr;
        return 0;
}
