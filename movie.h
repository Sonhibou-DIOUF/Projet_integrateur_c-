 #ifndef __MOVIE_HPP__
#define __MOVIE_HPP__
#include "actor.h"
#include <vector>

// Définit et implémente les fonctions relatives au film
struct movie_t {
    vector<char> titre;
    unsigned int annee;
    vector<actor_t> acteur;


};
#endif 
