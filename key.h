#ifndef KEY_H
#define KEY_H

#include <QImage>
#include <QRect>

using namespace std;

class key
{
	private:
		QImage image;
		QRect rect;
		bool show;
	public:
		key();
		QRect getRect();
		QImage & getImage();
		bool getShow();
		void setShow(bool a);
};

#endif