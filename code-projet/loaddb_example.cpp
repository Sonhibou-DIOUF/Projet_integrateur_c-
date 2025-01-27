/*
	loaddb_example.cpp
	
	Exemple d'ouverture et de lecture des enregistrements d'un fichier de films
	au format JSON.

	Appel:
   	loaddb_example moviedb.json

	Frédéric Goualard, Université de Nantes
	XMS2IE731 - 2024/2025
 */
#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
#include <string>

using namespace std;

using json = nlohmann::json;


int main(int argc, char *argv[])
{
  string ficname;

  if (argc != 2) { // Au moins 2 paramètres: argv[0] (nom du prog.) et argv[1] (nom du fichier db)
	 cerr << "Erreur: donnez un nom de fichier JSON en paramètre" << endl;
	 exit(1);
  }

  ifstream f(argv[1]);
  if (!f.good()) {
	 throw runtime_error(string("Impossible d'ouvrir le fichier ")+string(ficname));
  }
  
  json data;
  try {
	 while (f >> data) {
		if (data["cast"].size() != 0) { // Attention: certains films n'ont pas d'acteurs recensés!
		  unsigned int year;
		  try { // Attention: certains films n'ont pas d'année!
			 year = data["year"];
		  } catch (json::type_error&) {
			 year = 0;
		  }
		  cout << data["title"] << " (" << year << ")" << endl;
		  for (auto nom : data["cast"]) {
			 cout << nom << " ";
		  }
		  cout << endl;
		}
	 }
  } catch (json::parse_error&) {
		// Ajouter du code de gestion d'erreur
	}

}

