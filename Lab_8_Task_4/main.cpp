#include <iostream>
#include <vector>
#include "util.cpp"
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
  string answer;
  answer = question();
  cout<<answer<<endl;
}