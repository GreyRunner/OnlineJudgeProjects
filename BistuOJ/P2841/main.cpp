#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double sellCout, sellPrice, fixedCost, unitVariableCost;
    double profit, productionCost, variableCost, salesRevenue;

    cin >> sellCout >> sellPrice >> fixedCost >> unitVariableCost;

    variableCost = sellCout * unitVariableCost;
    productionCost = fixedCost + variableCost;
    salesRevenue = sellPrice * sellCout;
    profit = salesRevenue - productionCost;

    printf("%.2lf", profit);


    return 0;
}