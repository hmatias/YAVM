#ifndef	__MOVIE_HPP__
#define __MOVIE_HPP__

#include <QDate>
#include <QList>
#include <QString>

#include "Actor.hpp"

class Actor;

class Movie
{
 public:
  Movie();
  ~Movie();
  const QString &getTitle();
  const QString &getDescription();
  const QString &getGenre();
  const QString	&getFilePath();
  const QDate	&getYear();
  const Actor	*getRealisator();
  const QList<Actor *> &getActors();

 private:
  QString	_title;
  QString	_description;
  QDate		_year;
  QString	_genre;
  Actor		*_realisator;
  QString	_filePath;
  QList<Actor *>	_actors;
};

#endif /* __MOVIE_HPP__ */
