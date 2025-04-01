#include <iostream>
#include <string>
using namespace std;

// Template function to swap two values of any type
template <typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Swapping characters
    char a = 'a', b = 'b';
    cout << a << " " << b << endl;
    Swap(a, b); // Call template function
    cout << a << " " << b << endl;

    // Swapping integers
    int x = 1, y = 7;
    cout << x << " " << y << endl;
    Swap(x, y); // Call template function
    cout << x << " " << y << endl;

    return 0;
}
