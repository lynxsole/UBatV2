#ifndef DEF_CONFIG
#define DEF_CONFIG

#include<iostream>
#include<fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

class Sfile
{
private:
   int m_Verification = (10);
public:
    void countFile()
    {
        int count = 0;
        string path = "Script";

        for (const auto & entry : fs::directory_iterator(path)) {
         if (fs::is_regular_file(entry)) {
            count++;
            if(count == m_Verification){
                cout << "Le nombre de fichiers Max est Ateint " << count << endl;
                system("cls");
            }
        }
    }

        cout << "Le nombre de fichiers dans le dossier est : " << count << endl;

    return;
    }
};




#endif