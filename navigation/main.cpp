#include <QApplication>
#include <stdio.h>
#include "MainWindow.h"


int main(int argc, char **argv) {
  QApplication app(argc, argv);
  MainWindow mw;

#ifdef __arm__ // If is executed from a rasberry
  w.showFullScreen();
  QApplication::setOverrideCursor(Qt::BlankCursor);
#else
  w.show();
#endif


  return app.exec();
}