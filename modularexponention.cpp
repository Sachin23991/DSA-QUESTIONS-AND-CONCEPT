#include <iostream>
using namespace std;

// Function to perform modular exponentiation
// It returns (a^b) % m
long long modExp(long long a, long long b, long long m) {
    long long result = 1;      // Initialize result
    a = a % m;                 // In case 'a' is bigger than 'm'

    while (b > 0) {
        // If b is odd, multiply result by current 'a' modulo m
        if (b % 2 == 1) {
            result = (result * a) % m;
        }

        // Square 'a' and reduce it modulo m
        a = (a * a) % m;

        // Divide exponent by 2 (move to next bit in binary representation)
        b = b / 2;
    }

    return result; // final result (a^b) % m
}

int main() {
    long long a, b, m;

    // Input base, exponent, and modulo
    cout << "Enter base (a), exponent (b), and modulo (m): ";
    cin >> a >> b >> m;

    // Compute modular exponentiation
    long long ans = modExp(a, b, m);

    // Output the result
    cout << a << "^" << b << " % " << m << " = " << ans << endl;

    return 0;
}
