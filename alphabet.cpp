#include <iostream>
using namespace std;
int main()
{

  char i = 'a';
  do
  {
    cout << i << endl;
    i += 4;
  } while (i < 'z');
}