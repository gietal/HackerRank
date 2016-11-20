#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Date {
    public:
    int day;
    int month;
    int year;
};

istream& operator>>(istream& in, Date& date) {
    in >> date.day >> date.month >> date.year;
    return in;
}

int getFine(const Date& actual, const Date& expected) {
    
    if (actual.year < expected.year) {
        return 0;
    }
    
    if (actual.year > expected.year) {
        return 10000;
    }
    
    if(actual.month < expected.month) {
        return 0;
    }
    
    if(actual.month > expected.month) {
        return 500 * (actual.month - expected.month); 
    }
    
    if(actual.day <= expected.day) {
        return 0;
    }
    
    return 15 * (actual.day - expected.day);
}

int main() {
    Date actual;
    Date expected;
    cin >> actual;
    cin >> expected;
    
    
    cout << getFine(actual, expected);
    return 0;
}
