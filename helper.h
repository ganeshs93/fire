#ifndef HELPER_H
#define HELPER_H

#include <QImage>
#include <QRect>

using namespace std;

class helper
{
	public:
		helper();
		//Getters and Setters
		virtual bool getShow() = 0;
		virtual void setShow(bool a) = 0;
		virtual char getType() = 0;
		//Access position and image of helper
		virtual QRect getRect() = 0;
		virtual QImage & getImage() = 0;

};

#endif