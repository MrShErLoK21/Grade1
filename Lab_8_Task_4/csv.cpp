#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <string.h>
#include <algorithm>
using namespace std;


void setData(string fileName)
{
    ofstream file(fileName);
    file<<"dog\n";
    file.close();
}
vector<vector<string>> getData(string fileName)
{
    ifstream file(fileName);
    vector<vector<string>> dataList;
    string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
        vector<string> vec;

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
            vec.push_back(word);
            p = strtok(NULL, ",");
        }
        // boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
        dataList.push_back(vec);
    }
    // Close the File
    file.close();
    return dataList;
}