#ifndef __ACTOR_HPP__
#define __ACTOR_HPP__
#include "movie.h"
#include <vector>
using namespace std;
// Définit et implémente les fonctions relatives à l’acteur.
struct actor_t {
    vector<char> nom;
    vector<movie_t> film;
};

vector<char>    getnom();
vector<movie_t> getfim();

#endif