#include "key.h"

using namespace std;
//Constructor
key::key()
{
	image.load("key.png");
	rect = image.rect();
	rect.moveTo(100,200);
	show = true;
}
//Return postion of element
QRect key::getRect()
{
	return rect;
}
//Return image of element
QImage & key::getImage()
{
	return image;
}
//Getters and Setters
bool key::getShow()
{
	return show;
}

void key::setShow(bool a)
{
	show = a;
}
