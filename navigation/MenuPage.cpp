#include <stdio.h>
#include <QWidget>
#include <QPushButton>
#include <QSignalMapper>

#include "MenuPage.h"

MenuPage::MenuPage(MainWindow *parent) : QWidget(parent) {
	signalMapper = new QSignalMapper(this);
	connect(signalMapper, SIGNAL(mapped(int)), parent, SLOT(setPage(int)));

	layout = new QVBoxLayout();
	layout->setAlignment(Qt::AlignCenter);
	setLayout(layout);
	nButtons = 0;
}

void MenuPage::addButton() {
	nButtons += 1;

	QString label = (new QString("Page %1")) -> arg(nButtons);
	QPushButton *button = new QPushButton(label, this);
	const QSize BUTTON_SIZE = QSize(300, 50);
	button->setMaximumSize(BUTTON_SIZE);
	button->setMinimumSize(BUTTON_SIZE);
	// button->setStyleSheet("border: 1px solid black; background: white");
	layout->addWidget(button);

	signalMapper->setMapping(button, nButtons);
	connect(button, SIGNAL(clicked()), signalMapper, SLOT(map()));
}