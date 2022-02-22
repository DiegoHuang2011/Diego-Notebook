#include <iostream>
using namespace std;
int main()
{
    int jianshu=1;
    int sum=0;
    int zhongdian;
    cout<<"how much did you wanna add (must be odd) : ";
    cin>>zhongdian;
    while(jianshu<=zhongdian)
    {
        sum=sum+jianshu;
        jianshu=jianshu+2;



    } 
    cout<<"The total number is: "<<sum;




}