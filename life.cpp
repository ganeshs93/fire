#include "life.h"

using namespace std;
//Constructor. (x,y) is initial position
life::life(int x, int y)
{
	image.load("life.png");
	rect = image.rect();
	rect.moveTo(x,y);
	show = true;
	type = 'l';
}
//Return postion of element
QRect life::getRect()
{
	return rect;
}
//Return image of element
QImage & life::getImage()
{
	return image;
}
//Getters and Setters
bool life::getShow()
{
	return show;
}

void life::setShow(bool a)
{
	show = a;
}

char life::getType()
{
	return type;
}