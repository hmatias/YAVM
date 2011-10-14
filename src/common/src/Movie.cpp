#include "Movie.hpp"

Movie::Movie()
{
}

Movie::~Movie()
{
}

const QString &Movie::getTitle()
{
  return _title;
}

const QString &Movie::getDescription()
{
  return _description;
}

const QString &Movie::getGenre()
{
  return _genre;
}

const QString	&Movie::getFilePath()
{
  return _filePath;
}

const QDate	&Movie::getYear()
{
  return _year;
}

const Actor	*Movie::getRealisator()
{
  return _realisator;
}

const QList<Actor *> &Movie::getActors()
{
  return _actors;
}
