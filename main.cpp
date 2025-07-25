#include <stdio.h>
#include <iostream>
#include <vector>
#include "Movies.hpp"
#include "Movie.hpp"

int main(int argc, char **argv)
{
    Movies movies;
    movies.display_movie(); 
    movies.add_movie("titanic","GP",4);
    movies.display_movie();
    movies.add_movie("fast and fruious","GP",6);
    movies.display_movie();
    movies.add_movie("fast and fruious","GP",6);
    movies.remove_movie("fast and fruious");
    movies.display_movie();

	return 0;
}
