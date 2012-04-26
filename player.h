#ifndef PLAYER_H
#define PLAYER_H

#include <QImage>
#include <QRect>

using namespace std;

class player
{
	private:
		QImage image;
		QRect rect;
	public:
		player();
		QRect getRect();
		QImage & getImage();
		void moveleft();
		void moveright();
		void moveup();
		void movedown();
		void death();
};

#endif