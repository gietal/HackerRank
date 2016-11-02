#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(const vector<char>& v) {
    
}

ostream& operator << (ostream& out, const vector<char>& v) {
    for(int i = 0; i < v.size(); ++i) {
        out << v[i];
    }
    return out;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testNum = 0;
    cin >> testNum;
    
    for(int t = 0; t < testNum; ++t) {
        // read line
        string word = "";
        cin >> word;
        vector<char> odd;
        vector<char> even;
        odd.reserve(word.length() / 2);
        even.reserve(word.length() / 2);
        
        for(int i = 0; i < word.length(); ++i) {
            // start from even
            even.push_back(word[i]);
            ++i;
            
            // could end here
            if(i == word.length()) {
                break;
            }
            
            // now odd
            odd.push_back(word[i]);
        }
        
        cout << even << " " << odd << endl;
    }
    return 0;
}
