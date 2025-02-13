#include <iostream>
using namespace std;

// Hàm nhập mảng bằng con trỏ
void nhapMang(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhập phần tử arr[" << i << "]: ";
        cin >> *(arr + i); // Nhập giá trị bằng con trỏ
    }
}

// Hàm xuất mảng bằng con trỏ
void xuatMang(int* arr, int n) {
    cout << "Mảng hiện tại: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " "; // Xuất giá trị bằng con trỏ
    }
    cout << endl;
}

// Hàm hoán vị hai số bằng con trỏ
void hoanVi(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm sắp xếp mảng bằng con trỏ (Bubble Sort)
void sapXepMang(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                hoanVi(arr + j, arr + j + 1); // Hoán vị bằng con trỏ
            }
        }
    }
}

// Chương trình chính
int main() {
    int n;
    cout << "Nhập số phần tử của mảng: ";
    cin >> n;

    int* arr = new int[n]; // Cấp phát động mảng

    nhapMang(arr, n);
    cout << "\nMảng trước khi sắp xếp:\n";
    xuatMang(arr, n);

    sapXepMang(arr, n);
    cout << "\nMảng sau khi sắp xếp tăng dần:\n";
    xuatMang(arr, n);

    delete[] arr; // Giải phóng bộ nhớ
    return 0;
}