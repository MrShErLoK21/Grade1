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
void add_to_data(string path)
{
    string ip_adreas, login, website, date, time, ammount;
    cout<<"Enter ip adreas"<<endl;
    cin>>ip_adreas;

    cout<<"Enter login"<<endl;
    cin>>login;

    cout<<"Enter website"<<endl;
    cin>>website;

    cout<<"Enter date"<<endl;
    cin>>date;

    cout<<"Enter time"<<endl;
    cin>>time;

    cout<<"Enter ammount"<<endl;
    cin>>ammount;

    ofstream file (path, ios_base::app);
    file<<ip_adreas<<","<<login<<","<<website<<","<<date<<","<<time<<","<<ammount<<endl;
    file.close();
}

void edit_data()
{

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