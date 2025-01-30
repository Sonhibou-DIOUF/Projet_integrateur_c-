// moviedb.h
#ifndef __MOVIEDB_HPP__
#define __MOVIEDB_HPP__
#include <fstream>
#include "actor.h"
#include "movie.h"


// Définit et implémente la base de données (qui gère les films et les acteurs).
struct moviedb_t {
    ifstream db;
    vector<movie_t> films;
    vector <actor_t> acteurs;

};

#endif