#include <iostream>

using namespace std;

string question()
{
    string answer;
    bool status = false;
    while (status == false)
    {
        cout<<"Choose function to do. 1 - add new data; 2 - edit data; 3 - amount of data; 4 - identification of situations; 5 - top 10 website; 6 - most downloaded data;"<<endl;
        cin >> answer;
        if ( answer == "1")
        {
            status = true;
        }
        else if (answer == "2")
        {
            status = true;
        }
        else if (answer == "3")
        {
            status = true;
        }
        else if (answer == "4")
        {
            status = true;
        }
        else if (answer == "5")
        {
            status = true;
        }
        else if (answer == "6")
        {
            status = true;
        }
    }
    return answer;
}
void add_to_data()
{

}
void edit_data()
{

}
void amount_of_data()
{

}
void situation(vector<vector<string>> &filedata)
{
    for(vector<string>row:filedata)
    {
        for(string word:row)
        {
            cout<<word<<",";
        }
        cout<<endl;
    }
}
void top_10()
{

}
void download()
{

}