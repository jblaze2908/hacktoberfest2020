#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str;
  cout<<"Please enter your name: ";
  getline(cin, str);
  
  int i=0;
  while(str[i])
    i++;
  cout<<"Length of given string is "<<i<<endl;
  
  // Alternatively str.length() could also be used
  // cout<<str.length<<endl;
  
  return 0;
}
