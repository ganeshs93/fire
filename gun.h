#ifndef GUN_H
#define GUN_H

#include <QImage>
#include <QRect>


using namespace std;

class gun
{
	private:
		QImage image;
		QRect rect;
	public:
		gun(int x, int y);
		QRect getRect();
		QImage & getImage();
		
};

#endif