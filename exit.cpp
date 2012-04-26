#include "exit.h"

using namespace std;
//constructor
Exit::Exit()
{
	image.load("door.png");
	rect = image.rect();
	rect.moveTo(100,700);
	open = false;
}
//Return postion of element
QRect Exit::getRect()
{
	return rect;
}
//Return image of element
QImage & Exit::getImage()
{
	return image;
}
//Getters and Setters
bool Exit::getOpen()
{
	return open;
}	

void Exit::setOpen(bool a)
{
	open = a;
}
