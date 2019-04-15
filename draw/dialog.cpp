#include "dialog.h"
#include "ui_dialog.h"

#include <stdlib.h>
#include <iostream>

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog) {
  ui->setupUi(this);

  scene = new QGraphicsScene(this);
  ui->view->setSceneRect(0, 0, 991, 519);
  ui->view->setScene(scene);
  ui->view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  ui->view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

  this->pen = new QPen();
  this->pen->setWidth(0);
  this->pen->setStyle(Qt::SolidLine);
  this->pen->setCapStyle(Qt::SquareCap);
  this->colorR = this->colorG = this->colorB = 0;
  updateRGBLabels();
}


void Dialog::showEvent( QShowEvent* event ) {
    QWidget::showEvent( event );
}

Dialog::~Dialog() {
  delete ui;
}

// Add a line
void Dialog::on_pushButton_clicked() {
  int x1 = rand() % 900 + 1;
  int y1 = rand() % 500 + 1;
  int x2 = rand() % 900 + 1;
  int y2 = rand() % 500 + 1;
  QGraphicsLineItem *l = this->scene->addLine(x1, y1, x2, y2, *this->pen);
  this->lines.push_back(l);
}

// Add a circle
void Dialog::on_pushButton_2_clicked() {
  int x1 = rand() % 900 + 1;
  int y1 = rand() % 500 + 1;
  int r = rand() % (this->lineSize * 3) + 1;
  QColor c(this->colorR, this->colorG, this->colorB, 255);
  QGraphicsEllipseItem *l = this->scene->addEllipse(x1, y1, r, r, *this->pen, c);
  this->circles.push_back(l);
}

// Add a square
void Dialog::on_pushButton_3_clicked() {
  int x1 = rand() % 900 + 1;
  int y1 = rand() % 500 + 1;
  int s = rand() % (this->lineSize * 3) + 1;
  QColor c(this->colorR, this->colorG, this->colorB, 255);
  QGraphicsRectItem *l = this->scene->addRect(x1, y1, s, s, *this->pen, c); // Commented this part beouse wasn't becaming a square in the way should be
  this->squares.push_back(l);
}

// Clear the canvas
void Dialog::on_pushButton_4_clicked() {
  this->scene->clear();
  this->lines.clear();
  this->circles.clear();
  this->squares.clear();
}

void Dialog::updateRGBLabels() {
  QString r = QString("%1").arg(this->colorR);
  QString g = QString("%1").arg(this->colorG);
  QString b = QString("%1").arg(this->colorB);
  ui->r_value_label->setText(r.toUtf8());
  ui->g_value_label->setText(g.toUtf8());
  ui->b_value_label->setText(b.toUtf8());

  QColor c(this->colorR, this->colorG, this->colorB, 255);
  this->pen->setColor(c);
}

void Dialog::on_slider_r_sliderMoved(int position) {
  this->colorR = position; //ui->slider_r->value();
  updateRGBLabels();
}

void Dialog::on_slider_g_sliderMoved(int position) {
  this->colorG = position; //ui->slider_r->value();
  updateRGBLabels();
}

void Dialog::on_slider_b_sliderMoved(int position) {
  this->colorB = position; //ui->slider_r->value();
  updateRGBLabels();
}

void Dialog::on_slider_line_size_sliderMoved(int position) {
  this->lineSize = position;
  QString n = QString("%1").arg(this->lineSize);
  ui->line_size->setText(n);

  this->pen->setWidth(this->lineSize);
}
