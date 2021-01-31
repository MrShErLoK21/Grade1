#include <fstream>
#include <iostream>
#include "function.cpp"
using namespace std;


int main()
{
    drob arr[4];
    char ch;
    string path = "file.txt";
    ifstream file(path);
    for (int i=0; !file.eof(); i++)
    {
        file >> arr[i].chislitel >> ch >> arr[i].znamenatel;    
    }
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    search_of_drob (arr, ch, size);
    return 0;
}