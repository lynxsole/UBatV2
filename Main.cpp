//system
#include<iostream>
#include<fstream>
#include<vector>

//Perso
#include "Header/Config.hpp"
#include "Header/FileVerif.hpp"

using namespace std;

int main()
{
    fileC Run;
    string a;
    std::vector<string> listTab;
    listTab.push_back("salut");
    listTab.push_back("tout");
    listTab.push_back("le");
    listTab.push_back("monde");

    for(int i = 0; i < listTab.size(); i++){
        cout << listTab[i] << endl;
        cin >> a;
        Run.countFile();
    }

   
        
    return 0;
}