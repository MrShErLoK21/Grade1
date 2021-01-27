#include <iostream>
using namespace std;
string question ()
{
  bool statement = false;
  string answer;
  while (statement == false)
  {
    cout<<"Do you want to add new entries to the file(1/0)"<<endl;
    cin >> answer;
    if(answer == "1")
    {
        statement = true;
    }   
    else if (answer == "0")
    {
        statement = true;
    }
  }
  return answer;
}