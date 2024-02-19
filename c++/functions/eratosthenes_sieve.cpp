#include <bits/stdc++.h>
using namespace std;

vector<int> sieve_of_eratosthenes(int n) {
    vector<bool> is_prime((n - 1) / 2 + 1, true); // Inicializamos todos los números impares como primos
    vector<int> primes; // Vector para almacenar los números primos
    primes.push_back(2); // 2 es el único número par primo

    // Iteramos sobre los números impares del 3 al n
    for (int p = 3; p <= n; p += 2) {
        if (is_prime[p / 2]) {
            primes.push_back(p); // Agregamos el número primo al vector 'primes'
            for (long long i = 1LL * p * p; i <= n; i += 2 * p) {
                is_prime[i / 2] = false; // Marcamos los múltiplos de 'p' como no primos
            }
        }
    }

    return primes;
}