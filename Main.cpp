//Header system
#include<iostream>
#include<fstream>
#include<vector>

//Header Perso
#include "Header/Config.hpp"
#include "Header/FileVerif.hpp"

using namespace std;

void tableau(){
    std::vector<string> tab;
    tab.push_back("salut");

    for(int i = 0; i < 3; i++){
        cout << tab[i] << endl;
    }
        

};

int main()
{
    
    
        


    Sfile Run;
        Run.countFile();
    return 0;
}