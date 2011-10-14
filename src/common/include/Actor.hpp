#ifndef __ACTOR_HPP__
#define __ACTOR_HPP__

#include <QDate>
#include <QList>
#include <QString>

#include "Movie.hpp"

class Movie;

class Actor
{
 public:
  Actor();
  ~Actor();
  const QString	&getName();
  const QString	&getDesciption();
  const QDate	&getBirthDate();
  const QDate	&getDeathDate();
  const QList<Movie *> &getMovies();

 private:
  QString	_name;
  QString	_description;
  QDate		_dob;
  QDate		_dod;
  QList<Movie *> _filmography;
};

#endif /* __ACTOR_HPP__ */
