#ifndef DEF_FILEVERIF
#define DEF_FILEVERIF

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <filesystem>
#include <dirent.h>
#include<vector>

using namespace std;
namespace fs = std::filesystem;


#ifndef WIN32
#endif
 class FileCount
    {

        private:
            std::string fileExtension = ".bat";
            std::string fileName = "file";       
        public:

       void listFile(){
            std::string path = "Script";

       };

        
    };

#endif

