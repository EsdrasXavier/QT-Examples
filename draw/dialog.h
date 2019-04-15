#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>

#include <vector>

namespace Ui {
  class Dialog;
}

class Dialog : public QDialog
{
  Q_OBJECT

public:
  explicit Dialog(QWidget *parent = nullptr);
  ~Dialog();

protected:
  void showEvent(QShowEvent *ev);

private slots:
  void on_pushButton_clicked();
  void on_pushButton_2_clicked();
  void on_pushButton_3_clicked();
  void on_pushButton_4_clicked();
  void on_slider_r_sliderMoved(int position);
  void on_slider_g_sliderMoved(int position);
  void on_slider_b_sliderMoved(int position);
  void on_slider_line_size_sliderMoved(int position);

private:
  int lineWidth, colorR, colorG, colorB;
  int lineSize;

  QPen *pen;
  std::vector<QGraphicsLineItem *> lines;
  std::vector<QGraphicsEllipseItem *> circles;
  std::vector<QGraphicsRectItem *> squares;
  QGraphicsScene *scene;
  QGraphicsRectItem *rectangle;
  Ui::Dialog *ui;

  void updateRGBLabels();
};

#endif // DIALOG_H
