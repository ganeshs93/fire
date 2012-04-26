#include "wave.h"

using namespace std;
//Constructor. (x,y) is initial position
wave::wave(int x, int y)
{
	image.load("wave.jpeg");
	rect = image.rect();
	rect.moveTo(x,y);
	destroy = false;
}
//Return postion of element
QRect wave::getRect()
{
	return rect;
}
//Return image of element
QImage & wave::getImage()
{
	return image;
}
//Move wave to right
void wave::move()
{
	if (rect.right() < 983)
	{
		for (int i = 0; i < 16; i++)
			rect.moveRight(rect.right() + 1);
	}
	else
		destroy = true;
}
//Getter
bool wave::getDestroy()
{
	return destroy;
}
