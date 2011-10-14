#include "Actor.hpp"

Actor::Actor()
{
}

Actor::~Actor()
{
}

const QString	&Actor::getName()
{
  return _name;
}

const QString	&Actor::getDesciption()
{
  return _description;
}

const QDate	&Actor::getBirthDate()
{
  return _dob;
}

const QDate	&Actor::getDeathDate()
{
  return _dod;
}

const QList<Movie *> &Actor::getMovies()
{
  return _filmography;
}
