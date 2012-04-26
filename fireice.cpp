#include "fireice.h"

using namespace std;
//Constructor. Creates Player, Exit, and Key (who's initial positions are constant)
//Creates timers for moving projectiles
//Sets title of window and calls intialize()
fireIce::fireIce(QWidget *parent):QWidget(parent)
{
	p = new player();
	e = new Exit();
	k = new key();
	bulletTimer = new QTimer(this);
	connect(bulletTimer, SIGNAL(timeout()), this, SLOT(moveBullets()));
	bulletTimer->start(160);
	waveTimer = new QTimer(this);
	connect(waveTimer, SIGNAL(timeout()), this, SLOT(moveWaves()));
	waveTimer->start(80);
	icicleTimer = new QTimer(this);
	connect(icicleTimer, SIGNAL(timeout()), this, SLOT(moveIcicles()));
	icicleTimer->start(10);
	lives = 5;
	score = 0;
	level = 1;
	QString a = "Lives: ";
	QString b;
	a += b.setNum(lives);
	a += " Score: ";
	a += b.setNum(score);
	a += " Level: ";
	a += b.setNum(level);
	setWindowTitle(a);
	initialize();
}
//Moves all bubbles on the screen and checks for collison
void fireIce::moveBullets()
{
	for (int i = 0; i < (int)bullets.size(); i++)
		bullets[i]->move();
	for (int i = 0; i < (int)bullets.size(); i++)
	{
		if ((p->getRect()).intersects(bullets[i]->getRect()))
		{
			bullets.erase(bullets.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	repaint();
}
//Moves all waves on the screen and checks for collison
void fireIce::moveWaves()
{
	for (int i = 0; i < (int)waves.size(); i++)
		waves[i]->move();
	for (int i = 0; i < (int)waves.size(); i++)
	{
		if ((p->getRect()).intersects(waves[i]->getRect()))
		{
			waves.erase(waves.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	repaint();
}
//Moves all icicles on the screen and checks for collison
void fireIce::moveIcicles()
{
	for (int i = 0; i < (int)icicles.size(); i++)
	{
		if ((p->getRect()).intersects(icicles[i]->getRect()))
		{
			icicles.erase(icicles.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
		else if (p->getRect().x() == icicles[i]->getRect().x() && p->getRect().y() == icicles[i]->getRect().y())
		{
			icicles.erase(icicles.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	for (int i = 0; i < (int)icicles.size(); i++)
	{
		if (icicles[i]->getRect().top() > p->getRect().top())
			icicles[i]->moveup();
		else
			icicles[i]->movedown();
			
		if (icicles[i]->getRect().left() > p->getRect().left())
			icicles[i]->moveleft();
		else
			icicles[i]->moveright();
	}
	for (int i = 0; i < (int)icicles.size(); i++)
	{
		if ((p->getRect()).intersects(icicles[i]->getRect()))
		{
			icicles.erase(icicles.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
}
//Puts initial layout depending on current level. Only called when entering
//a level
void fireIce::initialize()
{
	//clear all old items
	bullets.clear();
	waves.clear();
	icicles.clear();
	guns.clear();
	liquids.clear();
	cannons.clear();
	launchers.clear();
	icicles.clear();
	helpers.clear();
	//bring player back to center without losing life
	p->death();
	if (lives < 5)
		lives++;
	if (level == 1)
	{
		life* l = new life(100,119);
		helpers.push_back(l);
		for (int y = 199; y < 600; y+= 80)
		{
			star* s = new star(100,y);
			helpers.push_back(s);
		}
		for (int x = 20; x < 933; x+=80)
		{
			gun* g = new gun(x,39);
			guns.push_back(g);
		}
		for (int y = 39; y < 680; y+= 80)
		{
			gun* g = new gun(20,y);
			guns.push_back(g);
		}
	}
	if (level == 2)
	{
		life* l = new life(100,119);
		helpers.push_back(l);
		for (int y = 199; y < 600; y+= 80)
		{
			star* s = new star(100,y);
			helpers.push_back(s);
		}
		for (int y = 39; y < 680; y+= 80)
		{
			cannon* c = new cannon(20,y);
			cannons.push_back(c);
		}
	}
	if (level == 3)
	{
		life* l = new life(100,119);
		helpers.push_back(l);
		for (int y = 199; y < 600; y+= 80)
		{
			star* s = new star(100,y);
			helpers.push_back(s);
		}
		for (int x = 20; x < 933; x+=80)
		{
			gun* g = new gun(x,39);
			guns.push_back(g);
		}
		launcher* l1 = new launcher(20,119);
		icicle* i1 = new icicle(l1->getRect().right(),l1->getRect().top());
		launchers.push_back(l1);
		icicles.push_back(i1);
		launcher* l2 = new launcher(20,679);
		icicle* i2 = new icicle(l2->getRect().right(),l2->getRect().top());
		launchers.push_back(l2);
		icicles.push_back(i2);
	}
	if (level > 3)
	{
		cout << "Victory" << endl;
    }
}
//Deletes all projectiles. Used after player dies. Icicles are cleared immediately
//after they hit the player, so they are not cleared in this method
void fireIce::reset()
{
	bullets.clear();
	waves.clear();
	repaint();
}
//Draws all necessary things
//Changes lives, score, and level numbers in window bar
void fireIce::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	painter.drawImage(e->getRect(), e->getImage());
	if (k->getShow())
		painter.drawImage(k->getRect(), k->getImage());
	for (int i = 0; i < (int)helpers.size(); i++)
	{
		if (helpers[i]->getShow())
			painter.drawImage(helpers[i]->getRect(), helpers[i]->getImage());
	}
	for (int i = 0; i < (int)guns.size(); i++)
	{
		painter.drawImage(guns[i]->getRect(), guns[i]->getImage());
	}
	for (int i = 0; i < (int)liquids.size(); i++)
	{
		painter.drawImage(liquids[i]->getRect(), liquids[i]->getImage());
	}
	for (int i = 0; i < (int)cannons.size(); i++)
	{
		painter.drawImage(cannons[i]->getRect(), cannons[i]->getImage());
	}
	for (int i = 0; i < (int)launchers.size(); i++)
	{
		painter.drawImage(launchers[i]->getRect(), launchers[i]->getImage());
	}
	for (int i = 0; i < (int)bullets.size(); i++)
	{
		if (bullets[i]->getDestroy())
			bullets.erase(bullets.begin() + i);
		else
			painter.drawImage(bullets[i]->getRect(), bullets[i]->getImage());
	}
	for (int i = 0; i < (int)waves.size(); i++)
	{
		if (waves[i]->getDestroy())
			waves.erase(waves.begin() + i);
		else
			painter.drawImage(waves[i]->getRect(), waves[i]->getImage());
	}
	for (int i = 0; i < (int)icicles.size(); i++)
	{
		painter.drawImage(icicles[i]->getRect(), icicles[i]->getImage());
	}
	painter.drawImage(p->getRect(), p->getImage());
	QString a = "Lives: ";
	QString b;
	a += b.setNum(lives);
	a += " Score: ";
	a += b.setNum(score);
	a += " Level: ";
	a += b.setNum(level);
	setWindowTitle(a);
}
//Keyboard input to move player
//First checks for projectile collision, then collison with water or any gun
//While checking each gun for a collision, it'll check whether a bubble or 
//wave needs to be fired at the player
//Then intersection with a key, star, or mushroom is checked and handled
//Finally it checks intersection with the door
void fireIce::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
		case Qt::Key_Left:
		{
			p->moveleft();
			break;
		}
		case Qt::Key_Right:
		{
			p->moveright();
			break;
		}
		case Qt::Key_Up:
		{
			p->moveup();
			break;
		}
		case Qt::Key_Down:
		{
			p->movedown();
			break;
		}
		default:
			QWidget::keyPressEvent(event);
	}
	for (int i = 0; i < (int)bullets.size(); i++)
	{
		if ((p->getRect()).intersects(bullets[i]->getRect()))
		{
			bullets.erase(bullets.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	for (int i = 0; i < (int)waves.size(); i++)
	{
		if ((p->getRect()).intersects(waves[i]->getRect()))
		{
			waves.erase(waves.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	for (int i = 0; i < (int)icicles.size(); i++)
	{
		if ((p->getRect()).intersects(icicles[i]->getRect()))
		{
			icicles.erase(icicles.begin() + i);
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	for (int i = 0; i < (int)liquids.size(); i++)
	{
		if ((p->getRect()).intersects(liquids[i]->getRect()))
		{
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	for (int i = 0; i < (int)launchers.size(); i++)
	{
		if ((p->getRect()).intersects(launchers[i]->getRect()))
		{
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
	}
	for (int i = 0; i < (int)cannons.size(); i++)
	{
		if ((p->getRect()).intersects(cannons[i]->getRect()))
		{
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
		else if (p->getRect().y() == cannons[i]->getRect().y())
		{
			if (cannons[i]->getRect().x() < p->getRect().x())
			{
				if (cannons[i]->getFire())
				{
					wave *w = new wave(cannons[i]->getRect().right(), cannons[i]->getRect().top());
					waves.push_back(w);
					cannons[i]->setFire(false);
					cannons[i]->reset();
				}
			}
		}
	}
	for (int i = 0; i < (int)guns.size(); i++)
	{
		if ((p->getRect()).intersects(guns[i]->getRect()))
		{
			if (lives > 1)
			{
				lives--;
				p->death();
				reset();
			}
			else
			{
				lives = 5;
				score = 0;
				level = 1;
				initialize();
			}
			break;
		}
		else if (p->getRect().x() == guns[i]->getRect().x())
		{
			if (guns[i]->getRect().y() > p->getRect().y())
			{
				bullet *b = new bullet(guns[i]->getRect().left(), guns[i]->getRect().top() - 40, 'u');
				bullets.push_back(b);
			}
			else
			{
				bullet *b = new bullet(guns[i]->getRect().left(), guns[i]->getRect().bottom(), 'd');
				bullets.push_back(b);
			}
		}
		else if (p->getRect().y() == guns[i]->getRect().y())
		{
			if (guns[i]->getRect().x() > p->getRect().x())
			{
				bullet *b = new bullet(guns[i]->getRect().left() - 50, guns[i]->getRect().top(), 'l');
				bullets.push_back(b);
			}
			else
			{
				bullet *b = new bullet(guns[i]->getRect().right(), guns[i]->getRect().top(), 'r');
				bullets.push_back(b);
			}
		}
		
	}
	if ((p->getRect()).intersects(k->getRect()))
	{
		 if (k->getShow() == true)
		 	score += 500;
		 k->setShow(false);
		 e->setOpen(true);
	}
	for (int i = 0; i < (int)helpers.size(); i++)
	{
		if ((p->getRect()).intersects(helpers[i]->getRect()))
		{
			if (helpers[i]->getShow() == true)
			{
				if (helpers[i]->getType() == 'l')
					lives++;
				else if (helpers[i]->getType() == 's')
					score += 10;
				helpers[i]->setShow(false);
			}
		}
	}
	if ((p->getRect()).intersects(e->getRect()))
	{
		if (e->getOpen() == true)
		{	
			level++;
			score += 1000;
			e->setOpen(false);
			k->setShow(true);
			initialize();
		}
	}
	repaint();
}