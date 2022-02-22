#include <iostream>
using namespace std;
int main()
{
    int ss;
    cout<<"how many days did you not bath?";
    cin>>ss;
    if (ss<=2)
        cout<<"that's ok! Keep your body clean!\n";
    else if (ss<=6)
        cout<<"maybe you could consider bath immediately!\n";
    else if (ss<=11)
        cout<<"that's really bad! bath immediately! Or germ would get you!\n";
    else if (ss<=16)
        cout<<"do mushrooms grow on you? I think yes!\n";
    else if (ss<=17)
        cout<<"you're helpless! No one could save you anymore! Viruses would destroy you!\n";
    else if (ss>=18)
        cout<<"bye bye...Your out of the world!\n";
}