#ifndef DEF_FILEVERIF
#define DEF_FILEVERIF

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include <dirent.h>
#ifndef WIN32
    #include <sys/types.h>
#endif
 class FileCount
    {
        public:
        void FileMax()
        {
           const int fileMax = 10; 
           int verifFileNumber = 0;

           bool Affiche()
           {
               WIN32_FIND_DATA File;
               HANDLE hSearch;
               int verifFileNumber;
               std::string NomFichiers;

               hSearch = FindFirstFile("/Script", &File);
               if (hSearch == INVALID_HANDLE_VALUE)
               {
                   return false;
               }

               unsigned int NbFichiers = 0;
               do
               {
                   ++NbFichiers;
                   NomFichiers += File.cFileName;
                   NomFichiers += "\n";
                   re = FindNextFile(hSearch, &File);
               } while (re);
               FindClose(hSearch);

               std::cout << "Il y a " << NbFichiers << " fichier(s) :" << std::endl << NomFichiers << std::endl;

               return 0;
           }
            if(verifFileNumber > fileMax)
            {
                
            }

        }
    };

#endif

