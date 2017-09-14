#include <iostream>

using namespace std;

int main()
{
  int num1 = 0;
  int num2 = 0;
  
  while(num1 == num2)
  {
    cout<<"Enter a whole number: \n";
    cin>>num1;
    cout<<"Enter another whole number: \n";
    cin>>num2;

    if( num1 == num2 )
    {
      cout<<"Numbers should be different!\n";
    }
  }

  cout<<"Increasing order: ";
  if( num1 < num2 )
  {
    cout<<num1<<" "<<num2<<endl;
  }
  else
  {
    cout<<num2<<" "<<num1<<endl;
  }

 return 0;
}

