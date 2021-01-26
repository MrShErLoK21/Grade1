#include <iostream>
using namespace std;
string question ()
{
  bool statement = false;
  string answer;
  while (statement == false)
  {
    cout<<"Хотите ли вы дополнить данные в файле? (1/0)"<<endl;
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