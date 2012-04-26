#ifndef ICICLE_H
#define ICICLE_H

#include <QImage>
#include <QRect>


using namespace std;

class icicle
{
	private:
		QImage image;
		QRect rect;
	public:
		icicle(int x, int y);
		QRect getRect();
		QImage & getImage();
		void moveleft();
		void moveright();
		void moveup();
		void movedown();
		
};

#endif