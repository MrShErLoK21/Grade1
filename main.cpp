#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string filename;
    cout << "Введите путь к файлу: ";
    cin >> filename;
    fstream fin(filename);
    string fullText = "";
    if (!fin.is_open())
    {
        cout << "Файл не может быть открыт или создан\n";
    }
    else
    {
        string s1;
        string s2;
        cout<<"Введите первое слово"<<endl;
        cin>>s1;
        cout<<"Введите второе слово"<<endl;
        cin>>s2;
        string myText;
        while (getline (fin, myText)) {
            fullText += myText;
        }
        size_t po = fullText.find(s1);
        if (po != std::string::npos)
        {
            fullText.erase(po, s1.length());
            fullText.insert(po, s2);
        }
    }
    fin.close();
    ofstream MyFile(filename);
    MyFile << fullText;
    MyFile.close();
    return 0;
}