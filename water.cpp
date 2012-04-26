#include "water.h"

using namespace std;
//Constructor. (x,y) is initial position
water::water(int x, int y)
{
	image.load("water.png");
	rect = image.rect();
	rect.moveTo(x,y);
}
//Return postion of element
QRect water::getRect()
{
	return rect;
}
//Return image of element
QImage & water::getImage()
{
	return image;
}
