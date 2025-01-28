 #ifndef __MOVIE_HPP__
#define __MOVIE_HPP__
#include "actor.h"



// Définit et implémente les fonctions relatives au film
struct movie_t {
    char titre[];
    unsigned int annee;
    actor_t acteur[];


};
#endif 
