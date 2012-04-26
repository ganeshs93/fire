#include "star.h"

using namespace std;
//Constructor. (x,y) is initial position
star::star(int x, int y)
{
	image.load("star.jpeg");
	rect = image.rect();
	rect.moveTo(x,y);
	type = 's';
	show = true;
}
//Return postion of element
QRect star::getRect()
{
	return rect;
}
//Return image of element
QImage & star::getImage()
{
	return image;
}
//Getters and Setters
bool star::getShow()
{
	return show;
}

void star::setShow(bool a)
{
	show = a;
}

char star::getType()
{
	return type;
}
