#include <iostream>
using namespace std;

int count( int arr[], int size, int x);

int main()
{
  int array[1] = {5};
  cout << count(array, 1, 7) << endl;

return 0;
}

int count( int arr[], int size, int x)
{

  if ( size == 0 )
  {
    return 0;
  }
  if ( size == 1)
  {
    if (arr[0] == x)
      return 1;
    else
      return 0;
  }

  if ( arr[0] == x )
    return 1 + count(arr+1, size-1, x);
  else
    return count(arr+1, size-1, x);

}
