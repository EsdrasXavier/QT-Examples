#include "dialog.h"
#include <QApplication>
#include <stdio.h>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Dialog w;

#ifdef __arm__ // If is executed from a rasberry
  w.showFullScreen();
  QApplication::setOverrideCursor(Qt::BlankCursor);
#else
  w.show();
#endif

  return a.exec();
}
