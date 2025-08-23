#include <iostream>
#include <string>
using namespace std;

typedef struct
{
    string medicalLicense;
    string name;
    float channelingFee;
    int patientsChecked[7];
} Doctor;

// Function to input doctor details
Doctor getData(Doctor d) 
{
    cout << "Enter Medical License: ";
    cin >> d.medicalLicense;
    cout << "Enter Doctor Name: ";
    cin >> d.name;
    cout << "Enter Channeling Fee: ";
    cin >> d.channelingFee;
    for (int i = 0; i < 7; i++) 
    {
        cout << "Enter the number of patients - Day" << i+1 <<": ";
        cin >> d.patientsChecked[i];
    }
    
    return d;
}

// Function to calculate and print total channeling fee
void calDocFee(float fee, int patients[], int size) 
{
    int totalPatients = 0;
    for (int i = 0; i < size; i++) 
    {
        totalPatients += patients[i];
    }
    float totalFee = totalPatients * fee;
    cout << "\nTotal Channeling Fee: " << totalFee << endl;
}

int main() 
{
    Doctor doc;
    doc = getData(doc);
    calDocFee(doc.channelingFee,doc.patientsChecked,7);

    return 0;
}
