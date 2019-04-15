#pragma once

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "MainWindow.h"

class SubPage : public QWidget {
Q_OBJECT
public:
	explicit SubPage(const char message[], MainWindow *parent);
private:
	QLabel *message;
	QPushButton *backButton;
};