// moviedb.h
#ifndef __MOVIEDB_HPP__
#define __MOVIEDB_HPP__
#include <fstream>
#include <vector>
#include "actor.h"
#include "movie.h"


// Définit et implémente la base de données (qui gère les films et les acteurs).
struct moviedb_t {
    std::ifstream db;
    std::vector<movie_t> films;
    std::vector <actor_t> acteurs;

};

#endif