#include <iostream>
using namespace std;
int main()
{
  int a,sum;
  sum=0;
  cout<<"how much mushrooms do you want to grow on your dirty skin?";
  cin>>a;
  sum=sum+a+5;
  sum=sum+(2*a*55/sum);
  cout<<"how much smellier do you want to be?";
  cin>>a;
  sum=sum+a+5;
  sum=sum-a+(45*a-a/2-3*sum*a);
  cout<<"how much more intelligence do you want to be? Must be less than 100!!!";
  cin>>a;
  if (a<100)
   {
       sum=sum-a-10;
       sum=sum*5/3;
       sum=sum^2;
       sum=sum/2+100;
       sum=sum*35/24;
       sum=sum+1000;
       sum=sum/3;
    cout<<"your 智商 is "<<sum<<".Great!\n";
   } 
  else if (a>=100)
  {
    sum=(sum-a-100)^3;
    sum=sum/2;
    sum=sum+sum*5+100;
    sum=sum+sum/1000;
    sum=sum+sum*90+10000;
    sum=sum+100999;
    sum=(sum+2345678)*3+1000000;
    sum=sum+a+a+1001010;
    cout<<"your 智商 is needed to improve! Must be less than 100! So your 智商 is "<<sum<<".Bad luck!\n";

  } 
}