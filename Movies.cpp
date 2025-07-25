#include "Movies.hpp"
#include <algorithm>
// Static member definition - bu çok önemli!
std::vector<Movie> Movies::movies;

Movies::Movies()
{
}

Movies::~Movies()
{
}


void Movies::display_movie()
{
    if(Movies::movies.size() != 0){
        std::cout << "-----------------------------------------------" << std::endl;
        for(const auto &movie : Movies::movies){
            std::cout << "Movie name : " << movie.get_name() 
                     << " | movie rating : " << movie.get_rating() 
                     << " | movie recurrence : " << movie.get_recurrence() << std::endl;
        }    
        std::cout << "-----------------------------------------------" << std::endl;

    }
    else{
        std::cout << "gösterilecek bir film yok" << std::endl;
    }
}

void Movies::add_movie(std::string name, std::string rating, int recurrence)
{
    bool check = true;
    for(const auto &movie : Movies::movies){
        if(movie.get_name() == name){  
            check = false;
            std::cout << "bu isimde başka bir film daha vardır" << std::endl;
            break; 
        }
    }
    if(check){
        Movie new_movie(name, rating, recurrence);  
        Movies::movies.push_back(new_movie);
    }
}

bool is_inside(const std::vector<Movie>& m, const std::string& name) {
    for (const auto& val : m) {
        if (val.get_name() == name)
            return true;
    }
    return false;
}
void Movies::remove_movie(const std::string& movie_name)
{
    if (is_inside(Movies::movies, movie_name)) {
        Movies::movies.erase(
            std::remove_if(Movies::movies.begin(), Movies::movies.end(),
                [&movie_name](const Movie& m) { return m.get_name()== movie_name; }),
            Movies::movies.end()
        );
    } else {
        std::cout << "There is no film called \"" << movie_name << "\"" << std::endl;
    }
}



