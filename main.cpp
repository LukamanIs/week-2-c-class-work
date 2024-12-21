// program name goes here
// your name goes here
// any example usage or helpful command-line arguments go here


#include <iostream>
#include <iomanip>  // for setw and setprecision
#include <cmath>    // for round
#include <sstream>  // for stringstream to convert int to string

using namespace std;

int main() {
    // Constants
    const double CONTAINER_CAPACITY = 2.76; // kg
    const double COST_PER_CONTAINER = 4.12; // dollars
    const double PROFIT_PER_CONTAINER = 1.45; // dollars

    // Input: Total amount of cheese produced
    double totalCheeseProduced;
    cout << "Please enter the total amount of cheese produced (in kg): ";
    cin >> totalCheeseProduced;

    // Calculate number of containers needed (rounded to nearest integer)
    int containersNeeded = round(totalCheeseProduced / CONTAINER_CAPACITY);

    // Calculate cost and profit
    double productionCost = containersNeeded * COST_PER_CONTAINER;
    double totalProfit = containersNeeded * PROFIT_PER_CONTAINER;

    // Format and display output
    cout << endl;
    cout << setw(50) << left << "The number of containers to hold the cheese is:"
        << setw(10) << right << containersNeeded << endl;

    cout << setw(50) << left << "The cost of producing " + to_string(containersNeeded) + " container(s) of cheese is: $"
        << setw(10) << right << fixed << setprecision(2) << productionCost << endl;

    cout << setw(50) << left << "The profit from producing " + to_string(containersNeeded) + " container(s) of cheese is: $"
        << setw(10) << right << fixed << setprecision(2) << totalProfit << endl;

    return 0;
}
