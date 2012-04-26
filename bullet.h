#ifndef BULLET_H
#define BULLET_H

#include <QImage>
#include <QRect>

using namespace std;

class bullet
{
	private:
		QImage image;
		QRect rect;
		char dir;
		bool destroy;
	public:
		bullet(int x, int y, char d);
		QRect getRect();
		QImage & getImage();
		void move();
		bool getDestroy();
};

#endif