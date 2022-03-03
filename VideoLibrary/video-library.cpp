#include "video-library.h"
#include <iostream>
#include <string>
using namespace std;

VideoLibrary::VideoLibrary()
{
	m = NULL;
  count_movies = 0;
  cout<< "Въведете име на видеотека: ";
  getline(cin,name);
}

VideoLibrary::VideoLibrary(string _name)
{
	m = NULL;
  count_movies = 0;
  name         = _name;
}

void VideoLibrary::AddMovie()
{
  Movie *p = m;
  m = new Movie[count_movies + 1];
  for(int i = 0; i < count_movies; i++)
    m[i] = p[i];
  m[count_movies].Add(count_movies + 1);
  count_movies++;
  delete []p;
}

void VideoLibrary::PrintMovie()
{
  int movieID;
  cout<<"Въведете номер на филм от архива: ";
  cin>>movieID;
  cout<<"Избраният филм е: \n";
  m[movieID -1].PrintData();
}

void VideoLibrary::PrintAllMovies()
{
  for(int i = 0; i < count_movies; i++)
    m[i].PrintData();
}

void VideoLibrary::RemoveMovie()
{
  int movieID;
  bool hasMovie;
  cout<<"Въведете номер на филм от архива: ";
  Movie *p = m;
  m = new Movie[count_movies];
  for(int i = 0; i < count_movies; i++)
    if (i != movieID -1)
      m[i] = p[i];
  delete []p;
  if(hasMovie)
  {
    count_movies--;
  }
  else {
    cout<<"Няма намерен филм в аргива по въведения номер";
  }
}


void VideoLibrary::DummyData(int count)
{
  m = new Movie[count];
  for(int i = 0; i < count; i++)
    m[i].DummyData(i + 1);
  count_movies = count;
}

