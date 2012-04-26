#ifndef WATER_H
#define WATER_H

#include <QImage>
#include <QRect>

using namespace std;

class water
{
	private:
		QImage image;
		QRect rect;
	public:
		water(int x, int y);
		QRect getRect();
		QImage & getImage();
};

#endif