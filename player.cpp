#include "player.h"

using namespace std;
//constructor
player::player()
{
	image.load("flame.png");
	rect = image.rect();
	rect.moveTo(500,375);
}
//Return postion of element
QRect player::getRect()
{
	return rect;
}
//Return image of element
QImage & player::getImage()
{
	return image;
}
//Movement methods
void player::moveleft()
{
	if (rect.left() > 15)
	{
		for (int i = 0; i < 16; i++)
			rect.moveLeft(rect.left() - 1);
	}
}
void player::moveright()
{
	if (rect.right() < 983)
	{
		for (int i = 0; i < 16; i++)
			rect.moveRight(rect.right() + 1);
	}
}
void player::moveup()
{
	if (rect.top() > 15)
	{
		for (int i = 0; i < 16; i++)
			rect.moveTop(rect.top() - 1);
	}
}
void player::movedown()
{
	if (rect.bottom() < 733)
	{
		for (int i = 0; i < 16; i++)
			rect.moveBottom(rect.bottom() + 1);
	}
}
//Move player back to center upon death
void player::death()
{
	rect.moveTo(500,375);
}