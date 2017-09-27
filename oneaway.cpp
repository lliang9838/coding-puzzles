#include <iostream>
#include <string>

using namespace std;

bool one_away(string , string  );

int main()
{

  string s1 = "pale";
  string s2 = "bake";

  cout << one_away(s1, s2) << endl;

  return 0;
}


bool one_away(string s1, string s2 )
{
  int errors = 0;

  string big = "";
  string small = "";

  if ( s1.size() > s2.size())
  {
    big = s1;
    small = s2;
  }
  else
  {
    big = s2;
    small = s1;
  }

  int n = big.size();

  int i = 0;
  int j = 0;

  if(s1.size() != s2.size())
  {
    while ( i < n )
    {
      if ( big[i] != small[j])
      {
        errors++;
        i++;
      }

      i++;
      j++;

    }
  }

  if(s1.size() == s2.size())
  {
    while ( i < n )
    {
      if ( big[i] != small[j])
      {
        errors++;
      }

      i++;
      j++;

    }
  }


  if ( errors > 1 )
    return false;
  else
    return true;


}
