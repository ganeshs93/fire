#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QImage>
#include <QRect>

using namespace std;

class launcher
{
	private:
		QImage image;
		QRect rect;
	public:
		launcher(int x, int y);
		QRect getRect();
		QImage & getImage();
};

#endif