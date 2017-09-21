#include <iostream>

using namespace std;

int main()
{
  char src[] = "Leslie Liang so cool .";

  int length = 0;
  int spaceCount = 0;


  while ( src[length] != '\0') //while it doesn't equal to null byte
  {
    if ( src[length] == ' ')
    {
      spaceCount++;
    }
    length++;
  }

  int newLength = length + spaceCount * 2 + 1;
  char * dst = new char[newLength];

  //now go through first array and copy over to second array
  int i = 0; //src
  int j = 0; //dest

  while ( src[i] != '\0')
  {
    if ( src[i] == ' ')
    {
      dst[j] = '%';
      dst[j+1] = '2';
      dst[j+2] = '0';
      j = j + 3;
      i = i + 1;

    }
    else
    {
      //not a blank space, so just copy the character over
      dst[j] = src[i];
      i++;
      j++;
    }
  }

  dst[j] = '\0'; //let's tack on a null byte

  cout << "URLified string is: " << dst << endl;


  delete [] dst;

  return 0;
}
