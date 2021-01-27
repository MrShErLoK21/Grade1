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

void add_new_entries( )
{

}

 void search_by_last_name(string path)
{
    vector<vector<string>> dataList = getData(path);
    string last_name;
    cout<<"Enter your last name"<<endl;
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
        add_new_entries();
    }
    else
    {
        search_by_last_name(path);
    }

    return 0;
}
