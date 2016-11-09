#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(unsigned n) {
    if (n == 1) {
        return false;
    }
    
    if (n == 2) {
        return true;
    }
    
    // even number
    // if the least significant bit is set, it's an odd number
    // so we check if the least significant bit is 0, which means even
    if((n & 1) == 0) {
        return false;
    }
    
    // odd number, up to sqrt(n)
    unsigned max = sqrt(n);
    for(unsigned i = 3; i <= max; i += 2) {
        if( n % i == 0) {
            return false;
        }
    }
    // anything larger than sqrt(n) cannot be the factor of n
    return true;
}

int main() {
    int testNum = 0;
    cin >> testNum;
    for(int i = 0; i < testNum; ++i) {
        unsigned n = 0;
        cin >> n;
        if(isPrime(n)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
