#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct Worker {
    char surname[50] = "undefined";
    char birthdate[11] = "01.01.1901";
    char pos[50] = "undefined";
    float salary = 4000;
    char educ[50] = "undefined";
    
    void showInfo(){
        cout << setw(20) << "Surname: " << surname << endl;
        cout << setw(20) << "Birthdate: " << birthdate << endl;
        cout << setw(20) << "Position: " << pos << endl;
        cout << setw(20) << "Salary: " << salary << "UAH." << endl;
        cout << setw(20) << "Education: " << educ << " UAH" << endl;
        cout << "=======================================\n";
    }
};