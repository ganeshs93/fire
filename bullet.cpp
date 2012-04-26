#include "bullet.h"

using namespace std;
//Constructor. (x,y) is initial position. d is the direction the bullet
//is fired
bullet::bullet(int x, int y, char d)
{
	image.load("bubble.png");
	rect = image.rect();
	rect.moveTo(x,y);
	dir = d;
	destroy = false;
}
//Return postion of element
QRect bullet::getRect()
{
	return rect;
}
//Return image of element
QImage & bullet::getImage()
{
	return image;
}
//Depending on dir variable, moves bullet in appropriate direction
void bullet::move()
{
	if (dir == 'l')
	{
		if (rect.left() > 15)
		{
			for (int i = 0; i < 16; i++)
				rect.moveLeft(rect.left() - 1);
		}
		else
			destroy = true;
	}
	else if (dir == 'r')
	{
		if (rect.right() < 983)
		{
			for (int i = 0; i < 16; i++)
				rect.moveRight(rect.right() + 1);
		}
		else
			destroy = true;
	}
	else if (dir == 'u')
	{
		if (rect.top() > 15)
		{
			for (int i = 0; i < 16; i++)
				rect.moveTop(rect.top() - 1);
		}
		else
			destroy = true;
	}
	else if (dir == 'd')
	{
		if (rect.bottom() < 733)
		{
			for (int i = 0; i < 16; i++)
				rect.moveBottom(rect.bottom() + 1);
		}
		else
			destroy = true;
	}
}

bool bullet::getDestroy()
{
	return destroy;
}
