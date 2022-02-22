#include <iostream>
using namespace std;

int main(){ //\t means tab and \n means change to the bottom line

    cout << "1. \tAdd new record." << endl;
    cout << "2. \tDelete record." << endl;
    cout << "3. \tView record." << endl;
    cout << "4. \tSearch record." << endl;
    cout << "5. \tQuit." << endl;

    cout << "Enter your selection > " << flush;

    int value;
    cin >> value;

    if(value < 3){
        cout << "so lessssss......Add moreeeeeee......\n" << endl;

    }
    else{
        cout << "That's enoughhhh......Yipeeeee......\n" << endl;

    }

    if(value == 5){
        cout << "Wowwwww......That's goooood......\n" << endl;



    }
    else{
        cout << "Impressive......No......\n" << endl;


    }

    return 0;

}