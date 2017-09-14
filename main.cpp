using namespace std;

int main()
{
  int num1;
  int num2;
  bool repeat = false;

  do
  {
    cout<<"Enter a whole number: ";
    cin>>num1;
    cout<<"Enter another whole number: ";
    cin>>num2;

    if( num1 == num2 )
    {
      cout<<"Numbers should be different!";
      repeat = true;
    }
    else repeat = false;
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

