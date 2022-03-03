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
    bool MovieExists(int);
    void AddMovie();
    void PrintMovie();
    void PrintAllMovies();
    void RemoveMovie();
    void DummyData(int);
    ~VideoLibrary() { delete []m; } //деструктор
};


