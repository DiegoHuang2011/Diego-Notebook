/*#include <iostream>
using namespace std;

int main() {/**//*
1

    int value = 5;
    cin>>value;

    switch(value ){
        case 4:
            cout << "value is 4" << endl;
            break;

        case 5:
            cout << "value is 5" << endl;
            break;
            break;
            break;
        

        default:
            cout << "unrecoganized value" << endl;
    
            
    }





    return 0;
}

*//*ababababababababa*/
#include <iostream>
using namespace std;

void showMenu() {
    cout << "1.Search.." << endl;
}

int main() { 
{
    cout << "1. \tAdd new record." << endl;
    cout << "2. \tDelete record." << endl;
    cout << "3. \tView record." << endl;
    cout << "4. \tSearch record." << endl;
    cout << "5. \tQuit." << endl;

    cout << "Enter your selection > " << flush;

    int value;
    cin >> value;

    if(value == 1){
        cout << "Adding new record..." << endl;



    }
    else if(value == 2){
        cout << "Deleting record..." << endl;



    }
      else if(value == 3){
        cout << "Viewing..." << endl;



    }
      else if(value == 4){
        cout << "Searching..." << endl;



    }
      else if(value == 5){
        cout << "Quitting..." << endl;



    }
    else {
        cout << "Invalid option." << endl;

    }




    return 0;
}  }




