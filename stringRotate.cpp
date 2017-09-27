#include <iostream>
#include <string>

using namespace std;

bool isSubstring(string s1, string s2); //assume that isSubstring is given


int main()
{



  return 0;
}


bool stringRotate(string s1, string s2)
{
  string s3 = s2 + s2;

  return isSubstring(s1, s3);
}
