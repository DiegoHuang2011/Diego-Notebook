#include <iostream>
using namespace std;

int main() { // "||"means either the first is true or the next makes the statement true
                /*
                "==" equality test
                "!=" not equal
                "<" less than
                ">" greater than
                "<=" less than or equal to
                ">=" greater than or equal to
                */

    int value1 = 7;
    int value2 = 4;

    if(value1 >= 5){
        cout << "Condition 1: true" << endl;

    }
    else {
        cout << "Condition 1: false" << endl;

    }
     if(value1 == 5 && value2 < 3){
        cout << "Condition 2: true" << endl;

    }
    else {
        cout << "Condition 2: false" << endl;

    }
     if(value1 == 7 || value2 < 3){
        cout << "Condition 3: true" << endl;

    }
    else {
        cout << "Condition 3: false" << endl;

    }
    if(value2 != 8){
        cout << "Condition 4: true" << endl;

    }
    else {
        cout << "Condition 4: false" << endl;

    }
    











    return 0;
}