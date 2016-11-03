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
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    const int arraySize = 6;
    const int hourGlassSize = 3;
    const int hourGlassMidIndex = 1;
    
    int maxSum = -INT_MAX;
    
    // going down
    for(int v = 0; v <= arraySize - hourGlassSize; ++v ) {
        // going right
        for(int h = 0; h <= arraySize - hourGlassSize; ++h) {
            int sum = 0;
            
            int topLeft = v;
            int middleLeft = v + 1;
            int bottomLeft = v + 2;
            
            for(int i = 0; i < hourGlassSize; ++i) {
                // get top row
                sum += arr[topLeft][h + i];
                
                // get bottom row
                sum += arr[bottomLeft][h + i];
            }
            // get middle
            sum += arr[middleLeft][h + hourGlassMidIndex];
            
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum;
    
    return 0;
}
