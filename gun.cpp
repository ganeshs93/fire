#include "gun.h"

using namespace std;
//Constructor. (x,y) is initial position
gun::gun(int x, int y)
{
	image.load("gun.png");
	rect = image.rect();
	rect.moveTo(x,y);
}
//Return postion of element
QRect gun::getRect()
{
	return rect;
}
//Return image of element
QImage & gun::getImage()
{
	return image;
}

	
