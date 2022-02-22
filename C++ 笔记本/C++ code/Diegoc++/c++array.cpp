#include <iostream>
using namespace std;

int main(){

    cout << "Array of integers" << endl;
    cout << "................." << endl;
    int value[3];

    value[0] = 88;
    value[1] = 123;
    value[2] = 7;

    cout << value[0] << endl;
    cout << value[1] << endl;
    cout << value[2] << endl;

    cout << endl << "Array of doubles" << endl;
    cout << "................." << endl;

    double number[4] = {4.5, 2.3, 5.4, 8.1};

    for(int i=0; i<4; i++ ){
        cout << "Hello stupidman! " << i << " :" << number[i] << endl;
    }
    cout << endl << "Initializing with zero values" << endl;
    cout << ".................." << endl;

    int numberArray[8] = {};
    
    for (int i = 0; i < 8; i++){
        cout << "Element at index " << i << " :" << numberArray[i] << endl;
    }
    
    string texts[] = {"Apples, tasty!", "banana, delicious!!", "orange, good smelling!!!"};

    for (int i=0; i<3; i++) {
        cout << "\tElements at index " << i << ": " << texts[i] << endl;
    }





    return 0;
}