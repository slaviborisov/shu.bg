#include "video-library.h"
#include <iostream>
#include <string>
using namespace std;

VideoLibrary::VideoLibrary()
{
	m            = NULL;
  count_movies = 0;
  cout<< "Въведете име на видеотека: ";
  getline(cin,name);
}

VideoLibrary::VideoLibrary(string _name)
{
	m            = NULL;
  count_movies = 0;
  name         = _name;
}

int VideoLibrary::GetArrayIndex(int id)
{
  for(int i = 0; i < count_movies; i++)
    if (m[i].GetID() == id) return i;
  return -1;
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
  int index = GetArrayIndex(movieID);

  if(index != -1) {
    cout<<"Избраният филм е: \n";
    m[index].PrintData();
  } else {
    cout<<"Няма такъв филм!";
  }
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
  cin>>movieID;
  if(GetArrayIndex(movieID) != -1) {
    int j, i;
    Movie *p = m;
    m = new Movie[count_movies - 1];
    for(j = 0, i = 0; i < count_movies; i++)
      if (p[i].GetID() != movieID)
        m[j++] = p[i];
    count_movies--;
    delete []p;
  } else {
    cout<<"Няма такъв филм!";
  }
}

void VideoLibrary::PrintMoviesByDirector() {
  string director;
  bool directorExists;
  cout<<"Въведете режисьор: ";
  cin.ignore();
  getline(cin,director);
  for(int i = 0; i < count_movies; i++)
    if(m[i].GetDirector() == director) {
      m[i].PrintData();
      directorExists = true;
    }
  if(!directorExists) {
    cout<<"Няма въведени филми за режисьор: "<<director<<endl;
  }
}

void VideoLibrary::DummyData(int count)
{
  m = new Movie[count];
  for(int i = 0; i < count; i++)
    m[i].DummyData(i + 1);
  count_movies = count;
}

