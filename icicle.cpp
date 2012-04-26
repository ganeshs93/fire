#include "icicle.h"

using namespace std;
//Constructor. (x,y) is initial position
icicle::icicle(int x, int y)
{
	image.load("icicle.png");
	rect = image.rect();
	rect.moveTo(x,y);
}
//Return postion of element
QRect icicle::getRect()
{
	return rect;
}
//Return image of element
QImage & icicle::getImage()
{
	return image;
}
//Movement methods
void icicle::moveleft()
{
	//for (int i = 0; i < 4; i++)
		rect.moveLeft(rect.left() - 1);
}
void icicle::moveright()
{
	//for (int i = 0; i < 4; i++)
		rect.moveRight(rect.right() + 1);
}
void icicle::moveup()
{
	//for (int i = 0; i < 4; i++)
		rect.moveTop(rect.top() - 1);
}
void icicle::movedown()
{
	//for (int i = 0; i < 4; i++)
		rect.moveBottom(rect.bottom() + 1);
}

