#include <iostream>
using namespace std;

void nhapMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhập phần tử arr[" << i << "]: ";
        cin >> *(arr + i);
    }
}
void xuanMang(int *arr, int n) {
    cout << "Mảng hiện tại: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

void hoanvi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sapXepMang(int* arr, int n) {
    for(int i=0; i < n -1 ; i++) {
        for(int j = i+1; j < n; j++) {
            if(*(arr + i) > *(arr + j)) {
                hoanvi(arr + i, arr + j);
            }
        }
    }
}
int main() {
    cout << "Số lượng phần tử của mảng:";
    int n;
    cin >> n;
    cout << "Nhập mảng:" << n << endl;
    int* arr = new int[n];
    nhapMang(arr, n);
    cout << "Xuất mảng:\n";
    xuanMang(arr, n);
    sapXepMang(arr, n);
    cout << "Mảng sau khi sắp xếp:\n";
    xuanMang(arr, n);
    return 0;
}