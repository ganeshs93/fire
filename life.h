#ifndef LIFE_H
#define LIFE_H

#include <QImage>
#include <QRect>
#include "helper.h"

using namespace std;

class life : public helper
{
	private:
		QImage image;
		QRect rect;
		bool show;
		char type;
	public:
		life(int x, int y);
		QRect getRect();
		QImage & getImage();
		bool getShow();
		void setShow(bool a);
		char getType();
		
};

#endif