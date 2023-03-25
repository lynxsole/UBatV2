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
   std::string m_log = "limite de fichier depasser";
public:
    void countFile()
    {
        int count = 20;
        string path = "Script";

        for (const auto & entry : fs::directory_iterator(path)){
         if (fs::is_regular_file(entry)) {
            count++;
            if(count > m_Verification){
                ofstream logF("Log/log.txt");
                if(logF)
                {
                    logF << m_log;
                }
            }
        }

      
    }

        
        cout << "Le nombre de fichiers dans le dossier est : " << count << endl;

    return;
    }
};




#endif