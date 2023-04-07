
 // Jawaban

 // 1.Karena Algoritma adalah urutan langkah langkah terstruktur yanh dirancang untuk memecahkan masalah secara sistematis dan efisien.
 // 2.Dua terstruktur tersebut adalah : Array dan Lingked list
 // 3. a.struktur data
 //    b.Bahasa Pemrograman
 //    c.Ukuran Input
 // 4.Jenis Algoritma insertionSort, Algoritma ini sangat cepat untuk data kecil. Pengurutan dilakukan dengan membandingkan setiap elemen satu per satu dan memasukkannya ke posisi yang bener secara berurutan.
 //   Algoritma ini sangat cepat untuk data kecil. Pengurutan dilakukan dengan membandingkan setiap elemen satu per satu dan memasukkannya ke posisi yang bener secara berurutan.
 //  5.  A. yang termasuk kedalam Quadratic adalah BubbleSort,Insertion Sort,Selection Sort
 //     B. yang termasuk Loginier adalah Quick Sort

#include <iostream>
using namespace std;

const int MAX = 45;
const string NICKNAME = "Ahmad Adhitya Wibowo";
const string INITIALS = "AAW";

void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;
    int B[MAX];

    do {
        if (arr[i] < arr[j]) {
            B[k] = arr[i];
            i++;
        }
        else {
            B[k] = arr[j];
            j++;
        }
        k++;
    } while (i <= mid && j <= high);

    while (i <= mid) {
        B[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high) {
        B[k] = arr[j];
        j++;
        k++;
    }

    for (int x = low; x <= high; x++) {
        arr[x] = B[x];
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main() {
    int arr[MAX];
    int n = 0;

    do {
        cout << "Masukkan jumlah bilangan bulat (maksimum 45): ";
        cin >> n;
    } while (n < 1 || n > MAX);

    cout << "Masukkan " << n << " bilangan bulat:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Hasil pengurutan:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}