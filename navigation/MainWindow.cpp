#include <stdio.h>
#include <QWidget>
#include <QPushButton>
#include <QStackedLayout>

#include "MainWindow.h"
#include "MenuPage.h"
#include "SubPage.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent) {
  setWindowTitle("Application");
  setFixedSize(1024, 600);
  layout = new QStackedLayout();
  MenuPage *menuPage = new MenuPage(this);
  SubPage  *page1    = new SubPage("This is page one.", this);
  SubPage  *page2    = new SubPage("This is page two.", this);

  layout->addWidget(menuPage);
  layout->addWidget(page1);
  layout->addWidget(page2);
  layout->setCurrentIndex(0);
  this->setLayout(layout);

  menuPage->addButton();
  menuPage->addButton();
}

void MainWindow::setPage(int index) {
  layout->setCurrentIndex(index);
}

void MainWindow::goToMenu() {
  layout->setCurrentIndex(0);
}