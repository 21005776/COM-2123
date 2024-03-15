#include <iostream>

using namespace std;

int main()
{
    double totalCost,salary,rent,electricity,netProfit;

    double profit = 0.1;
    double sale = 0.15;

    cout << "Enter total cost of merchandise: " << endl;
    cin >> totalCost;

    cout << "Enter salary of all employees, including yourself: " << endl;
    cin >> salary;

    cout << "Enter rent amount: " << endl;
    cin >> rent;

    cout << "Enter electricity bill: " << endl;
    cin >> electricity;

    netProfit= totalCost*0.15 + salary + electricity;

    cout << "Total NetProfit is equals to:" <<netProfit<<endl;

    return 0;
}
