#ifndef MOVIES_HPP
#define MOVIES_HPP
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Movie.hpp"

class Movies
{
private:
    static std::vector<Movie> movies; 
    
public:
    Movies();
    ~Movies();
    
    void add_movie(std::string name, std::string rating, int recurrence);
    void add_moive(Movie m);
    void display_movie();
    void remove_movie(const std::string& movie_name);
    
};

#endif // MOVIES_HPP