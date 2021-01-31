#include <iostream>
#include <fstream>
#include <vector>
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
string question();
void add_to_data(vector <proxy_row_values> &proxy_server);
void edit_data();
void amount_of_data();
void situation();
void top_10();
void download();