#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah kata: ";
    cin >> n;

    string data[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukkan kata ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        cout << "\nLangkah " << i << ":" << endl;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;

            cout << "Pergeseran: ";
            for (int k = 0; k < n; k++) {
                cout << data[k] << " ";
            }
            cout << endl;
        }

        data[j + 1] = key;

        cout << "Hasil langkah " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }

    cout << "\nHasil Insertion Sort: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
