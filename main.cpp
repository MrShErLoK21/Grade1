#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string filename;
    cout << "Введите путь к Cat: ";
    cin >> filename;
    ifstream fin;
    fin.open(filename);
    if (!fin.is_open())
    {
        cout << "Файл не может быть открыт или создан\n";
    }
    else
    {
        string s = "London is a capital of Great Britian";
        fin >> s;
        fin.close();
        string s1;
        string str;
        cout << "Введите подстроку которую надо заменить" << endl;
        getline(cin, s1);
        cout << "Введите подстроку которой надо заменить" << endl;
        getline(cin, str);
        size_t po = s.find(s1);
        if (po != std::string::npos)
        {
            s.erase(po, s1.length());
            s.insert(po, str);
        }
        ofstream fout;
        fout.open("text.txt", ios_base::trunc);
        fout << s << endl;
        fout.close();
    }
    return 0;
}