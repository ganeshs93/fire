#ifndef WAVE_H
#define WAVE_H

#include <QImage>
#include <QRect>

using namespace std;

class wave
{
	private:
		QImage image;
		QRect rect;
		bool destroy;
	public:
		wave(int x, int y);
		QRect getRect();
		QImage & getImage();
		void move();
		bool getDestroy();
};

#endif