#include <iostream>
using namespace std;

int main(){

  /*  for(int i=0; i<5; i++){

        cout << "i is: " << i << endl;

    if(i==3) {
       
        continue;
    }
    cout << "looping..." << endl;

    }

    cout << "program quitting..." << endl;
*/
     const string password = "hello";


     string input;


    do {
       
        cout << "Enter your password > " << flush;
        cin >> input; 

        if(input == password) {
            break;
        }
        
        
        else {
            cout << "Access denied." << endl;
        }
     
    } while (true);
    
    cout<<"password accepted" << endl;

    cout<< "Program quitting."<< endl;

    return 0;
}