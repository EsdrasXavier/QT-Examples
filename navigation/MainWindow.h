
#pragma once

#include <QWidget>
#include <QPushButton>
#include <QStackedLayout>

class MainWindow : public QWidget {
  Q_OBJECT
public:
  explicit MainWindow(QWidget *parent = 0);
private:
  QStackedLayout *layout;
public slots:
  void setPage(int index);
  void goToMenu();
};