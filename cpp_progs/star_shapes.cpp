#include<iostream>
using namespace std;
int main()
{
  unsigned int size,i,j;
  cout<<"Enter Size of the shape: ";
  cin>>size;
  for(i=0;i<size;i++)
  {
    /* Square */
    for(j=0;j<size;j++)
      cout<<"* ";
    
    cout<<"\t";

    /* Rectangle */
    for(j=0;j<(size%2?size/2+1:size/2);j++)
      cout<<"* ";

    cout<<"\t";

    /* Triangle */
    for(j=0;j<i;j++)
      cout<<" ";
    for(j=i;j<size;j++)
      cout<<"* ";

    cout<<endl;
  }
  return 0;
}
