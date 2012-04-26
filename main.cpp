#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFormLayout>
#include <QLineEdit>
#include <QLabel>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsView>

#include "fireice.h"


//Main method
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	fireIce *window = new fireIce();

	window->resize(1000,750);
	window->setFixedSize(1000,750);
	window->show();


	return app.exec();
}