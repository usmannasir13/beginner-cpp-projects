#include <iostream>
#include <string>
using namespace std;

int main() {
    string customerName;
    int unitsConsumed;
    double totalBill;

    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    if (unitsConsumed <= 100) {
        totalBill = unitsConsumed * 10;
    } else if (unitsConsumed <= 200) {
        totalBill = unitsConsumed * 15;
    } else {
        totalBill = unitsConsumed * 20;
    }

    cout << "\n--- Electricity Bill ---" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Total Bill: Rs. " << totalBill << endl;

    return 0;
}