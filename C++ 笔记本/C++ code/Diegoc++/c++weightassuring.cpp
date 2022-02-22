#include <iostream>
using namespace std;
int main()
{
    int you,weight;
    you=0;
    weight=0;
    int i=0;
    cout<<"What's your weight? Answer TRUTHFULLY!"<<endl;
    cin>>you;
    weight=weight+you;

    while(i<4)
    {
        cout<<"input your weiht:\n";
        cin>>you;
        if(you<25)
    {
      
        cout<<"You're too skinny, be fatter!!!I'm telling the absolute true word."<<endl;
        cout<<"Write again: "<<endl;
        you=0;
        cin>>you;
        
    }
    else
    {
        cout<<"You're normal"<<endl;
        cout<<"Program quitting..."<<endl;
        cout<<i;
        i++;
    }
    
    }
/*

    for(int i=0;i<5;i++)
    {
        cout<<i;
    
    }
    int i=6;
    while(i>0)
    {
        cout<<i;
        i--;
    
    }
    i=1;
    do{
        cout<<i;
        i++;
        
    }while(i<5);
    */
    return 0;
}