#include <fstream>
#include <iostream>
using namespace std;
struct drob
{
    int chislitel;
    int znamenatel;
};
void search_of_drob (drob arr[4], char ch, int size)
{
    int a, b, chislo;
    string way = "another.txt";
    ofstream another(way);
    for(int i=0; i<size; i++)
    {
        a = arr[i].chislitel;
        b = arr[i].znamenatel;
        if (a<b)
        {
            another << a << ch << b << " ";
        }
        
        else if(a%b==0) 
            { 
                chislo = a/b;
                another << chislo << " ";
            }
        else
            {
                another <<a/b<<" "<<a%b<<"/"<< b << " ";
            }
    }
    another.close();
}