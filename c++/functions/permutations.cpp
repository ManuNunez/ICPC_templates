#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

long long count_permutations(const map<char, int>& elements) {
    int total_count = 0;
    for (auto& kv : elements) {
        total_count += kv.second;
    }
    return factorial(total_count);
}
