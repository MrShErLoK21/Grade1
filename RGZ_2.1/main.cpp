#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "function.cpp"
using namespace std;

struct proxy_row_values
{
    string ip_adress;
    string login;
    string website;
    int days;
    int months;
    int years;
    int hours;
    int minutes;
    int ammount;
};
using namespace std;


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
    vector <proxy_row_values> proxy_server;
    proxy_server.push_back ({"46.174.25.20","Ivan","www.news.ua",12,20,2001,12,30,20});
    proxy_server.push_back ({"46.174.35.20","Kost9","www.games.com",12,20,2001,12,30,20});
    proxy_server.push_back ({"46.174.47.25","Nikol21","www.wiki.com",12,20,2001,12,30,20});
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
    proxy_server.clear();
    string answer;
    answer = question();
    if (answer == "1")
    {
        add_to_data(proxy_server);
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
}