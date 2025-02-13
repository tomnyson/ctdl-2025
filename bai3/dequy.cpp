#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// n =4 finbonacci(3)+ fibonacci(2)
/**  2+ 1
 * 0  1 2       
 * fibonacci(0) + fibonacci(1) + fibonacci(2) + fibonacci(3)
 */

int main() {
    // đê quy fibonacci
    int n;
    cout << "Nhập n:" << endl;
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;  
    return 0;
}