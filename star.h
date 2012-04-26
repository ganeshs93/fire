#ifndef STAR_H
#define STAR_H

#include <QImage>
#include <QRect>
#include "helper.h"

using namespace std;

class star : public helper
{
	private:
		QImage image;
		QRect rect;
		bool show;
		char type;
	public:
		star(int x, int y);
		QRect getRect();
		QImage & getImage();
		bool getShow();
		void setShow(bool a);
		char getType();
		
};

#endif