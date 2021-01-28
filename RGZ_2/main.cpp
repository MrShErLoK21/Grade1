#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "function.cpp"
#include "csv.cpp"

using namespace std;
// struct proxy_row_values
// {
//     string ip_adress;
//     string login;
//     string website;
//     int days;
//     int months;
//     int years;
//     int hours;
//     int minutes;
//     int ammount;
// };

int main(int argc, char* argv[])
{
    string path = "";
    if (argc == 2)
    {
        path = argv[1];
    }
  else
  {
    cout<< "Incorect syntax. Use ./main file_path"<<endl;
    return -1;
  }
    vector<vector<string>> proxy_file_data = getData(path);
    string answer;
    answer = question();
    if (answer == "1")
    {
        add_to_data(path);
    }
    else if (answer == "2")
    {
        edit_data();
    }
    else if (answer == "3")
    {
        amount_of_data();
    }
    else if(answer == "4")
    {
        situation();
    }
    else if (answer == "5")
    {
        top_10();
    }
    else if (answer == "6")
    {
        download();
    }
    return 0;
}