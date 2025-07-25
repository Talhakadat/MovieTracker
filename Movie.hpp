#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <stdio.h>
#include <iostream>
#include <vector>

class Movie
{
private:
    std::string name;
    std::string rating;
    int recurrence;
public:
    Movie(std::string name,std::string rating,int recurrence);
    
    ~Movie();
    
    std::string get_name() const;
    std::string get_rating() const ;
    int get_recurrence() const ;

};



#endif // MOVIE_HPP
