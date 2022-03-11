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
    int GetArrayIndex(int);
    void AddMovie();
    void PrintMovie();
    void PrintAllMovies();
    void RemoveMovie();
    void PrintMoviesByDirector(); // Показва всички филми на конкретен режисьор
    void PrintLatestAvailableMovie();
    ~VideoLibrary() { delete []m; } //деструктор
};
