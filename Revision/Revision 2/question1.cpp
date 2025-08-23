#include <iostream>
using namespace std;

void inputSales(float sales[], int size);
float findMaxSales(float sales[], int size);
float findMinSales(float sales[], int size);
float calcCommission(float sale);
void PrintReport(float sales[], int size);

int main() 
{
    const int SIZE = 5;
    float Sales[SIZE];

    // Input sales
    inputSales(Sales, SIZE);

    // Find and print maximum and minimum sales
    cout << "Maximum sales: " << findMaxSales(Sales, SIZE) << endl;
    cout << "Minimum sales: " << findMinSales(Sales, SIZE) << endl;

    // Print report
    PrintReport(Sales, SIZE);

    return 0;
}

// Function to input sales data
void inputSales(float sales[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << "Enter sales for salesman " << (i + 1) << ": ";
        cin >> sales[i];
    }
}

// Function to find maximum sales
float findMaxSales(float sales[], int size) 
{
    float maxSales = sales[0];
    for (int i = 1; i < size; i++) 
    {
        if (sales[i] > maxSales) 
        {
            maxSales = sales[i];
        }
    }
    return maxSales;
}

// Function to find minimum sales
float findMinSales(float sales[], int size) 
{
    float minSales = sales[0];
    for (int i = 1; i < size; i++) 
    {
        if (sales[i] < minSales) 
        {
            minSales = sales[i];
        }
    }
    return minSales;
}

// Function to calculate commission
float calcCommission(float sale) 
{
    if (sale > 5000) 
    {
        return sale * 0.06;
    } 
    else if (sale >= 1000 && sale <= 5000) 
    {
        return sale * 0.04;
    } 
    else 
    {
        return sale * 0.02;
    }
}

// Function to print report
void PrintReport(float sales[], int size) 
{
    cout << "Salesman ID\tSales\tCommission" << endl;
    for (int i = 0; i < size; i++) 
    {
        float commission = calcCommission(sales[i]);
        cout << (i + 1) << "\t\t" << sales[i] << "\t" << commission << endl;
    }
}