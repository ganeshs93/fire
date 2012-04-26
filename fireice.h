#ifndef FIREICE_H
#define FIREICE_H

#include <QWidget>
#include <QKeyEvent>
#include <vector>
#include <QPainter>
#include <QApplication>
#include <iostream>
#include <QString>

#include "player.h"
#include "exit.h"
#include "gun.h"
#include "cannon.h"
#include "bullet.h"
#include "water.h"
#include "key.h"
#include "wave.h"
#include "launcher.h"
#include "icicle.h"
#include "star.h"
#include "life.h"

using namespace std;

class fireIce : public QWidget
{
	Q_OBJECT
	private:
		player *p;
		key *k;
		Exit *e;
		vector<gun*> guns;
		vector<bullet*> bullets;
		vector<water*> liquids;
		vector<cannon*> cannons;
		vector<wave*> waves;
		vector<launcher*> launchers;
		vector<icicle*> icicles;
		vector<helper*> helpers;
		QTimer *bulletTimer;
		QTimer *waveTimer;
		QTimer *icicleTimer;
		int lives;
		int score;
		int level;
	public:
		fireIce(QWidget *parent = 0);
		void keyPressEvent(QKeyEvent *event);
		void paintEvent(QPaintEvent *event);
		void initialize();
		void reset();
	public slots:
		void moveBullets();
		void moveWaves();
		void moveIcicles();

};

#endif