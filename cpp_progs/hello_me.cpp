#include<iostream>
#include<string>
using namespace std;

int main()
{
  cout<<"Enter your name: ";
  string name;
  cin>>name;
  string greeting="Hello "+name;
  string allstar(greeting.size()+4,'*');
  string spaces(greeting.size(),' ');
  string padding="* "+spaces+" *";
  cout<<allstar<<endl;
  cout<<padding<<endl;
  cout<<"* "<<greeting<<" *"<<endl;
  cout<<padding<<endl;
  cout<<allstar<<endl;
  return 0;
}

