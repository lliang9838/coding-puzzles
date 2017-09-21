#include <iostream>
#include <string>
using namespace std;


int main()
{

  string input;
  cout << "Please enter a string: ";
  cin >> input;

  int start = 0;
  int end = input.size()-1;

  while ( start < end )
  {
    if ( input[start] != input[end])
    {
      cout << "Not a  palindrome!" << endl;
      return 0;
    }
    start++;
    end--;
  }

  cout << "Is a palindrome!" << endl;

  return 0;
}
