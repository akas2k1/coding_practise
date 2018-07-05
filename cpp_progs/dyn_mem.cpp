#include<iostream>
using namespace std;

int main()
{
  int *arr=new int[10];
  float test = 3.1415;
  int test1 = static_cast<int>(test);

  cout<<"test1 = "<<test1<<endl;
  for (int i=0;i<10;i++)
    arr[i]=i;

  for (int i=0;i<10;i++)
    cout<<"arr["<<i<<"] = "<<i<<endl;

  delete []arr;
}
