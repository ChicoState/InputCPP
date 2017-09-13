#include <iostream>

using namespace std;

int main()
{
  int num1;
  int num2;
  bool repeat = false;

  do
  {
    cout<<"Enter a whole number: \n";
    cin>>num1;

    while (!(cin >> num1)) // <<< note use of "short circuit" logical operation here
    {
      cout << "Please enter the number " < endl;
      cin.clear();
      cin.ignore(); // NB: preferred method for flushing cin
    }


    cout<<"Enter another whole number: \n";
    cin>>num2;
    while (!(cin >> num2)) // <<< note use of "short circuit" logical operation here
    {
      cout << "Please enter the number " < endl;
      cin.clear();
      cin.ignore(); // NB: preferred method for flushing cin
    }

    if( num1 == num2 )
    {
      cout<<"Numbers should be different!\n";
      repeat = true;
    }
    else
      repeat = false;
  }while(repeat);

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
