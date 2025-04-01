#include "Worker.h"
using namespace std;

int main(){
    int sizeA = 5;
    Worker* arr = new Worker[sizeA]{
        {"Olegov", "01.01.1998", "Manager", 11999.99, "Higher education"},
        {"Karpenko", "10.10.2000", "Programmer", 8999.99, "Higher education"},
        {"Kovalenko", "12.12.1999", "Designer", 8899.99, "Higher education"},
        {"But", "01.04.2006", "Tester", 5199.99, "Higher education"},
        {"Sergeiv", "15.05.2004", "Cleanerr", 4499.99, "Secondary education"}
    };
}