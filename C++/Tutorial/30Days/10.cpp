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
#include <unordered_map>

using namespace std;

// output is most significant bit first when being popped
stack<int> decimalToBinary(int n) {
    stack<int> output;
    
    // only works for positive number
    while (n > 0) {
        int remainder = n % 2;
        n = n/2;
        output.push(remainder);
    }
    return output;
}

int main(){
    int n;
    cin >> n;
    auto binary = decimalToBinary(n);
    int maxConsecutive = 0;
    int currentConsecutive = 0;
    while(!binary.empty()) {
        // find until i get 1
        if (binary.top() == 0) {
            // get max consecutive
            maxConsecutive = max(maxConsecutive, currentConsecutive);
            // reset current consecutive
            currentConsecutive = 0;
        } else {
            // add current consecutive
            ++currentConsecutive;
        }
        binary.pop();
    }
    // do 1 more in case the binary string ends in 1
    maxConsecutive = max(maxConsecutive, currentConsecutive);
    cout << maxConsecutive;
    
    return 0;
}
