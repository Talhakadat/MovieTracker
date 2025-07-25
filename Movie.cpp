#include "Movie.hpp"

Movie::Movie(std::string name,std::string rating,int recurrence) 
: name {name}, rating {rating}, recurrence {recurrence}
{
}

Movie::~Movie()
{
}

std::string Movie::get_name() const{
    return name;
}

std::string Movie::get_rating()const {
    return rating;
}
int Movie::get_recurrence()const {
    return recurrence;
}


