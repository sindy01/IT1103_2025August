#include <iostream>
using namespace std;

void InputTransactions(int transactions[], int size);

int main() 
{
    const int SIZE = 8; // 4 days for 2 outlets
    int transactions[SIZE];

    // Input transaction records
    InputTransactions(transactions, SIZE);

    // Print transactions
    cout << "\nTransaction Records:" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cout << "Transaction " << (i + 1) << ": " << transactions[i] << endl;
    }

    return 0;
}

// Function to input transaction records
void InputTransactions(int transactions[], int size) 
{
    cout << "Day --> 1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 = Wednesday" << endl;
    
    int quantity;
    int k = 0;
    
    for (int i = 1; i < 3; i++) 
    {
        for (int j = 1; j < 5; j++) 
        {
            cout << "Enter quantity for Outlet " << i << " Day " << j <<": ";
            cin >> quantity;
            
            if(quantity >= 0 && quantity <=100)
            {
                transactions[k] = i * 1000 + j * 100 + quantity;
                k++;
            }
            else
            {
                cout << "Invalid quantity" << endl;
                j--;
            }
        }
    }
}
