#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double mealCost = 0.0;
    int tipPercent = 0;
    int taxPercent = 0;
    
    cin >> mealCost >> tipPercent >> taxPercent;
    
    double tip = mealCost * ((double)tipPercent / 100.0);
    double tax = mealCost * ((double)taxPercent / 100.0);
    double total = mealCost + tip + tax;
    cout << "The total meal cost is " << round(total) << " dollars.";
}