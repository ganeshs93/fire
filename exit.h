#ifndef EXIT_H
#define EXIT_H

#include <QImage>
#include <QRect>

using namespace std;

class Exit
{
	private:
		QImage image;
		QRect rect;
		bool open;
	public:
		Exit();
		QRect getRect();
		QImage & getImage();
		bool getOpen();
		void setOpen(bool a);
};

#endif