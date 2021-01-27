#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <string.h>
#include <algorithm>
// #include <boost/algorithm/string.hpp>
/* 
 * A class to read data from a csv file.
 */
using namespace std;

class CSVReader
{
    string fileName;
    string delimeter;

public:
    CSVReader(string filename, string delm = ",") : fileName(filename), delimeter(delm)
    {
    }
    // Function to fetch data from a CSV File
    vector<vector<string>> getData();
};
/*
* Parses through csv file line by line and returns the data
* in vector of vector of strings.
*/
vector<vector<string>> CSVReader::getData()
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
int main()
{
    // string answer;
    // answer = question();
    // cout<<answer<<endl;

    // Creating an object of CSVWriter
    CSVReader reader("example.csv");
    // Get the data from CSV File
    vector<vector<string>> dataList = reader.getData();
    // Print the content of row by row on screen
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
    return 0;
}
