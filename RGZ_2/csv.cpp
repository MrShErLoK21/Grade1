#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;


 vector<vector<string>> getData(string path)
{
    ifstream file(path);
    vector<vector<string>> proxy_file_data;
    string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
         vector<string> row;

        int n = line.length();
        // declaring character array
        char char_array[n + 1];

        // copying the contents of the
        // string to char array
        strcpy(char_array, line.c_str());

        char *p = strtok(char_array, ",");
        while (p)
        {
            string word = p;
            row.push_back(word);
            p = strtok(NULL, ",");
        }
        if (row.size() != 6)
        {
            throw std::invalid_argument( "Error! Incorect file data" );
        }
         proxy_file_data.push_back(row);
    }
    // Close the File
    file.close();
    return proxy_file_data;
}
void addData(string path, vector<string> data)
{
    ofstream file(path, ios_base::app);
    for (string piece_of_data : data)
    {
        file<<piece_of_data<<",";
    }
    file.seekp(-1, std::ios_base::cur);
    file.close();
}