#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, string> phoneBook;
    int n = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        string name, phoneNum;
        cin >> name >> phoneNum;
        phoneBook[name] = phoneNum;
    }
    
    string query;
    cin >> query;
    while(!query.empty()) {
        auto item = phoneBook.find(query);
        if(item == phoneBook.end()) {
            cout << "Not found" << endl;
        } else {
            cout << (*item).first << "=" << (*item).second << endl;
        }
        query.clear();
        cin >> query; // if eof, wont change the value
    }
    return 0;
}
