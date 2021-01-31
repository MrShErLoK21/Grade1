#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
using namespace std;

string question()
{
    string answer;
    bool status = false;
    while (status == false)
    {
        std::cout<<"Choose function to do. 1 - add new data; 2 - edit data; 3 - amount of data; 4 - identification of situations; 5 - top 10 website; 6 - most downloaded data;"<<endl;
        std::cin >> answer;
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
void add_to_data(string path)
{
    string ip_adreas, login, website, date, time, ammount;
    std::cout<<"Enter ip adreas"<<endl;
    std::cin>>ip_adreas;

    std::cout<<"Enter login"<<endl;
    std::cin>>login;

    std::cout<<"Enter website"<<endl;
    std::cin>>website;

    std::cout<<"Enter date"<<endl;
    std::cin>>date;

    std::cout<<"Enter time"<<endl;
    std::cin>>time;

    std::cout<<"Enter ammount"<<endl;
    std::cin>>ammount;

    ofstream file (path, ios_base::app);
    file<<ip_adreas<<","<<login<<","<<website<<","<<date<<","<<time<<","<<ammount<<endl;
    file.close();
}

void edit_data(vector<vector<string>> &proxy_file_data, string path)
{
    string ip_adress, login, website, date, time, ammount;
    string ip_adreas;
    vector<string> new_string;
    std::cout<<"Enter ip adress"<<endl;
    std::cin>>ip_adreas;
    std::cout<<proxy_file_data.size();
    for(int i = 0; i<proxy_file_data.size(); i++)
    {
        if (proxy_file_data[i][0] == ip_adreas)
        {
            
            std::cout<<"Enter ip_adress"<<endl;
            std::cin>>ip_adress;
            new_string.push_back(ip_adress);

            std::cout<<"Enter login"<<endl;
            std::cin>>login;
            new_string.push_back(login);

            std::cout<<"Enter website"<<endl;
            std::cin>>website;
            new_string.push_back(website);

            std::cout<<"Enter data"<<endl;
            std::cin>>date;
            new_string.push_back(date);

            std::cout<<"Enter time"<<endl;
            std::cin>>time;
            new_string.push_back(time);

            std::cout<<"Enter ammount"<<endl;
            std::cin>>ammount;
            new_string.push_back(ammount);

            proxy_file_data[i] = new_string;
        }
        break;
    }
    for (int i = 0; i<proxy_file_data.size(); i++)
    {
        for (int j = 0; j<new_string.size(); j++)
        {
            cout << proxy_file_data[i][j]<<",";
        }
    }
}
void amount_of_data()
{
    
}
void situation()
{

}
void top_10()
{

}
void download()
{

}