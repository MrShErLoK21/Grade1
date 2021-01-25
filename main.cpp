#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string filename;
    cout << "Введите путь к файлу: ";
    cin >> filename;
    fstream fin(filename);
    if (!fin.is_open())
    {
        cout << "Файл не может быть открыт или создан\n";
    }
    else
    {
        string s1;
        string s2;
        cout << "Введите подстроку которую надо заменить";
        getline(cin, s1);
        cout << "Введите подстроку которой надо заменить";
        getline(cin, s2);
        string myText;
        string fullText = "";
        while (getline (fin, myText)) {
            // Output the text from the file
            fullText += myText;
        }
        size_t po = fullText.find(s1);
        if (po != std::string::npos)
        {
            fullText.erase(po, s1.length());
            fullText.insert(po, s2);
        }
        fin << fullText;

    }
    fin.close();
    return 0;
}