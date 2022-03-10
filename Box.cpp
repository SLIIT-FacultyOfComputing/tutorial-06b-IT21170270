#include "Box.h"
#include <iostream>

using namespace std;

// Implement setters
void Box::setLength(int len )
{
  length = len ;
}
void Box::setWidth(int widh )
{
  width = widh ;
}
void Box::setHeight(int heig )
{
  height = heig ;
}
// Implement getters
int Box::getLength()
{
  return length ;
}
int Box::getWidth()
{
  return width ;
}
int Box::getHeight()
{
  return height ;
}
// Implemenet the calcVolume() unction
int Box::calcVolume()
{
  return length * width * height ;
}
