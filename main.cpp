#include "Worker.h"
using namespace std;

int main(){
    int sizeA = 5;
    Worker* arr = new Worker[sizeA]{
        {"Olegov", 1998, "Manager", 11999.99, "Higher education"},
        {"Karpenko", 2000, "Programmer", 8999.99, "Higher education"},
        {"Kovalenko", 1999, "Designer", 8899.99, "Higher education"},
        {"But", 2006, "Tester", 5199.99, "Higher education"},
        {"Sergeiv", 1960, "Cleaner", 4499.99, "Secondary education"}
    };
    for (int i = 0; i < sizeA; i++){
        if (arr[i].birthyear < 1965){
            arr[i].showInfo();
        }
    };
}