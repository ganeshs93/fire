#include "launcher.h"

using namespace std;
//Constructor. (x,y) is initial position
launcher::launcher(int x, int y)
{
	image.load("launcher.jpg");
	rect = image.rect();
	rect.moveTo(x,y);
}
//Return postion of element
QRect launcher::getRect()
{
	return rect;
}
//Return image of element
QImage & launcher::getImage()
{
	return image;
}
