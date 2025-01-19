// fibonacci rekurencyjnie
/*
#include <iostream>

using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1) 
        return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout << "Podaj liczbę n: ";
    cin >> n;
    cout << "Fibonacci (" << n << ") = " << fibonacciRecursive(n) << endl;
    return 0;
}
*/

// fibonacci iteracyjnie
/* 
#include <iostream>
using namespace std;

int fibonacciIterative(int n) {
    if (n <= 1)
        return n;

    int prev1 = 0, prev2 = 1, current;
    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

int main() {
    int n;
    cout << "Podaj liczbę n: ";
    cin >> n;
    cout << "Fibonacci (" << n << ") = " << fibonacciIterative(n) << endl;
    return 0;
}
*/

// ciag geometryczny rekurencyjnie
/*
#include <iostream>
using namespace std;

int gRecursive(int n) {
    if (n == 0)
        return 1;
    return 2 * gRecursive(n - 1);
}

int main() {
    int n;
    cout << "Podaj wartość n: ";
    cin >> n;
    cout << "a(" << n << ") = " << gRecursive(n) << endl;
    return 0;
}
*/

// ciag geometryczny iteracyjnie
/*
#include <iostream>
using namespace std;

int gIterative(int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= 2;
    }
    return result;
}

int main() {
    int n;
    cout << "Podaj wartość n: ";
    cin >> n;
    cout << "a(" << n << ") = " << gIterative(n) << endl;
    return 0;
}

// nwd dla 2 liczb
/*

#include <iostream>
using namespace std;

// Funkcja pomocnicza do obliczenia NWD dwóch liczb
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    cout << "Największy wspólny dzielnik (NWD) wynosi: " << gcd(a, b) << endl;

    return 0;
}
*/
*/
