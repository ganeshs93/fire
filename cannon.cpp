#include "cannon.h"

using namespace std;
//Constructor. (x,y) is initial position
cannon::cannon(int x, int y)
{
	image.load("cannon.jpg");
	rect = image.rect();
	rect.moveTo(x,y);
	fire = true;
	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(changeFire()));
}
//Return postion of element
QRect cannon::getRect()
{
	return rect;
}
//Return image of element
QImage & cannon::getImage()
{
	return image;
}
//Getters and Setters
void cannon::setFire(bool a)
{
	fire = a;
}

bool cannon::getFire()
{
	return fire;
}
//Start one second timer to reset cannon to shoot again
void cannon::reset()
{
	timer->start(1000);
}
//Allow cannon to fire. Is SLOT of timer
void cannon::changeFire()
{
	fire = true;
	timer->stop();
}
