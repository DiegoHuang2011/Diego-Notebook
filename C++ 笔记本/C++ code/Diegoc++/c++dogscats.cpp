#include <iostream>
using namespace std;

int main() {


    int numberCats = 5;
    int numberDogs = 7;
    int number = numberCats + numberDogs;


    cout << "Hello,see below-" << endl;
    cout << "Number of dogs:" << numberDogs << endl;
    cout << "Number of cats:" << numberCats << endl;

    cout << "Total number of animals:" << number << endl;

    cout << "New dog acquired!" << endl;

    numberDogs = numberDogs + 5;

    cout << "New number of dogs:" << numberDogs << endl;



    return 0;

}