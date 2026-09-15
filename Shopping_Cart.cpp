#include <iostream>
using namespace std;

double calculateTotal(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}

int main() {
    const int SIZE = 5;
    double prices[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter price of product " << (i + 1) << ": Rs. ";
        cin >> prices[i];
    }

    double total = calculateTotal(prices, SIZE);

    double highest = prices[0];
    for (int i = 1; i < SIZE; i++) {
        if (prices[i] > highest) {
            highest = prices[i];
        }
    }

    cout << "\n--- Shopping Cart Summary ---" << endl;
    cout << "All Prices: ";
    for (int i = 0; i < SIZE; i++) {
        cout << "Rs. " << prices[i] << " ";
    }
    cout << endl;

    cout << "Total Price: Rs. " << total << endl;
    cout << "Highest Price: Rs. " << highest << endl;

    return 0;
}