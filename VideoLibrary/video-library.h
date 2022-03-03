#pragma once
#include "movie.h"
#include <string>
using namespace std;

class VideoLibrary {
  private:
    int count_movies;
    string name;
    Movie *m;

  public:
    VideoLibrary();
    VideoLibrary(string);
    void AddLibraryName(string);
    void AddMovie();
    void PrintMovies();
    ~VideoLibrary() { delete []m; } //деструктор
};


