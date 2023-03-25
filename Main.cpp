//Header system
#include<iostream>
#include<fstream>
#include<vector>

//Header Perso
#include "Header/Config.hpp"
#include "Header/FileVerif.hpp"

using namespace std;

int main()
{
    std::vector<string> tab;
    tab.push_back("salut");
    tab.push_back("tout");
    tab.push_back("le");
    tab.push_back("monde");

    for(int i = 0; i < tab.size(); i++){
        cout << tab[i] << endl;
    }

    Sfile Run;
        Run.countFile();
    return 0;
}