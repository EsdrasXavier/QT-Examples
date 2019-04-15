#include <stdio.h>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

#include "SubPage.h"
#include "MainWindow.h"


SubPage::SubPage(const char messageString[], MainWindow *parent) : QWidget(parent) {
	message = new QLabel(messageString, this);
	backButton = new QPushButton("Back", this);
	QVBoxLayout *layout = new QVBoxLayout();

	layout->addWidget(message);
	layout->addWidget(backButton);
	setLayout(layout);

	connect(backButton, SIGNAL(clicked()), parent, SLOT(goToMenu()));
}
