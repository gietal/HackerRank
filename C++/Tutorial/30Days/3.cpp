#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    // If n is odd, print Weird
    // If n is even and in the inclusive range of 2 to 5, print Not Weird
    // If n is even and in the inclusive range of 6 to 20 , print Weird
    // If n is even and greater than 20, print Not Weird

    if (n % 2 != 0) {
        cout << "Weird";
        return 0;
    }
    
    if (n >= 2 && n <= 5) {
        cout << "Not Weird";
        return 0;
    }
    
    if (n >= 6 && n <= 20) {
        cout << "Weird";
        return 0;
    }
    
    cout << "Not Weird";
    return 0;
}
