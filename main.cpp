#include <iostream>
#include <sstream>
#include <string>
#include "actor.h"
#include "movie.h"
#include "moviedb.h"

void lectureFichier(ifstream& f);
void demandeNomUtilisateur();
void afficheListeTitreFilm();
int  affchierNomobreFilm();
int  affchierNomobreActeur();

int main(int argc, char *argv [])
{
    if (argc < 2){
        cout << "Donnez au minimum un parametre" << endl;
    }

    string f = argv[1];
    
    ifstream fichierJson("f");
    if (!fichierJson)
    {
        cout << "Erreur d'ouverure du fichier" << endl;
        return 1;
    }



    return 0;
}
void lectureFichierJson(ifstream& f){
    string ligne;
    // Lecture ligne à ligne
    while (getline(f,ligne)) 
    {
        // Traitement de chaque ligne
        cout << ligne << endl;
    }
}

int affchierNomobreFim(){

}

int affchierNomobreActeur(){

}

void demandeNomUtilisateur(){

}

void afficheListeTitreFilm(){

}
