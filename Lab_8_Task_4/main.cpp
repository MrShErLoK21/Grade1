#include <iostream>
#include <vector>
using namespace std;
struct note
{
  string first_name;
  string last_name;
  long phone_number;
  int day;
  int month;
  int year;
};

int main() 
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
        statement = true;
    }   
    else if (answer == "0")
    {
        statement = true;
        statement = false;
    }
  }
  cout << answer;
  
}