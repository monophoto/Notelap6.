#include<iostream>
using namespace std;

int main(){
    int integer[100] = {};
    int numbers = 1;
    int Evennumbers = 0;
    int Oddnumbers = 0;
    int i = 0;
    while(numbers != 0){
        cout << "Enter an integer: ";
        cin >> numbers;
        integer[i] = numbers;
        i++;
    }

    int j = 0;
    while(j < (i-1)){
        if(integer[j]%2 == 0){
            Evennumbers++;
            j++;

        }else{
            Oddnumbers++;
            j++;
        }
    }
    cout << "#Even numbers = " << Evennumbers << "\n";
    cout << "#Odd numbers = " << Oddnumbers;
    return 0;
}
