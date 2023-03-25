echo off

set fileName /p = non de votre fichier

cd G:\doc
mkdir %fileName%
cd %fileName%
mkdir img
mkdir song
mkdir pf
mkdir ref
start AfterFx.exe
