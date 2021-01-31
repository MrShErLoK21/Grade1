#include <iostream>
#include <fstream>
#include <vector>
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
void add_to_data(vector <proxy_row_values> &proxy_server, string path)
{
    proxy_row_values f;
    string ip_adress, login, website, days, months, years, hours, minutes, ammount;
    cout<<"Enter ip adreas"<<endl;
    cin>>f.ip_adress;

    cout<<"Enter login"<<endl;
    cin>>f.login;

    cout<<"Enter website"<<endl;
    cin>>f.website;

    cout<<"Enter day"<<endl;
    cin>>f.days;

    cout<<"Enter months"<<endl;
    cin>>f.years;

    cout<<"Enter hours"<<endl;
    cin>>f.hours;

    cout<<"Enter minutes"<<endl;
    cin>>f.minutes;

    cout<<"Enter ammount"<<endl;
    cin>>f.ammount;
    
    proxy_server.push_back(f);

    ofstream file;
    file.open(path);
    for(int i = 0; i<proxy_server.size(); i++)
    {
       file<<proxy_server[i].ip_adress<<" ";
       file<<proxy_server[i].login<<" ";
       file<<proxy_server[i].website<<" ";
       file<<proxy_server[i].days<<" ";
       file<<proxy_server[i].months<<" ";
       file<<proxy_server[i].years<<" ";
       file<<proxy_server[i].hours<<" ";
       file<<proxy_server[i].minutes<<" ";
       file<<proxy_server[i].ammount;
       file<<endl;
    }
    file.close();
}

void edit_data()
{
  cout<<2;
}
void amount_of_data()
{
    cout<<3;
}
void situation()
{
    cout<<4;
}
void top_10()
{
    cout<<5;
}
void download()
{
    cout<<6;
}