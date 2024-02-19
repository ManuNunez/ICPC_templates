#include <bits/stdc++.h>
using namespace std;

map<int, int> canonical_factorization(int number) {
    map<int, int> factorization;
    
    // Prime factorization of the number
    for (int i = 2; i * i <= number; ++i) {
        while (number % i == 0) {
            factorization[i]++;
            number /= i;
        }
    }
    
    // If the number is prime, add it to the factorization with exponent 1
    if (number > 1) {
        factorization[number]++;
    }
    
    return factorization;
}