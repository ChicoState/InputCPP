#include <iostream>

int main()
{
  int num1 = 0;
  int num2 = 0;
  
  while(num1 == num2)
  {
    std::cout<<"Enter a whole number: \n";
    std::cin>>num1;
    std::cout<<"Enter another whole number: \n";
    std::cin>>num2;

    if( num1 == num2 )
    {
      std::cout<<"Numbers should be different!\n";
    }
  }

  std::cout<<"Increasing order: ";
  if( num1 < num2 )
  {
    std::cout<<num1<<" "<<num2<<std::endl;
  }
  else
  {
    std::cout<<num2<<" "<<num1<<std::endl;
  }

 return 0;
}

