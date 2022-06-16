#include "Box.h"

// Implement setters and getters
void Box::setLengthnWidth(int len, int wid, int h)
{
  length = len;
  width = wid;
  height = h;
}

void Box::getLength()
{
  return length;
}

void Box::getWidth()
{
  return width;
}

void Box::getHeight(){
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return height * length* width;
}

