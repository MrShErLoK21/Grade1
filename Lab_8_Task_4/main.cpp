#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <string.h>
#include <algorithm>
#include "util.cpp"
#include "csv.cpp"

using namespace std;

void add_new_entries(string path)
{
    string last_name, name, phone_number, birth_date;
    vector<string> row;

    cout<<"Enter last name"<<endl;
    cin>>last_name;
    row.push_back(last_name);

    cout<<"Enter name"<<endl;
    cin>>name;
    row.push_back(name);

    cout<<"Enter phone number"<<endl;
    cin>>phone_number;
    row.push_back(phone_number);

    cout<<"Enter birth date"<<endl;
    cin>>birth_date;
    row.push_back(birth_date);
    
    addData(path,row);
}

 void search_by_last_name(string path)
{
    vector<vector<string>> dataList = getData(path);
    string last_name;
    cout<<"Enter last name"<<endl;
    cin>>last_name;
    for (vector<string> row : dataList)
    {
        if(row[0] == last_name)
        {
            for (string data : row)
            {
                cout << data << " ";
            }
            cout<<endl;
        }
    } 
}
int main()
{
    string path = "example.csv";
    string answer;
    answer = question();
    if (answer == "1")
    {
        add_new_entries(path);
    }
    else
    {
        search_by_last_name(path);
    }

    return 0;
}
