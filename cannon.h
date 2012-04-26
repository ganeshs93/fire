#ifndef CANNON_H
#define CANNON_H

#include <QImage>
#include <QRect>
#include <QTimer>

using namespace std;

class cannon : public QObject
{
	Q_OBJECT
	private:
		QImage image;
		QRect rect;
		bool fire;
		QTimer *timer;
	public:
		cannon(int x, int y);
		QRect getRect();
		QImage & getImage();
		void setFire(bool a);
		bool getFire();
		void reset();
	public slots:
		void changeFire();
};

#endif