/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QApplication>
#include <QDialog>
#include <QGraphicsView>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGraphicsView *view;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *line_size;
    QSlider *slider_line_size;
    QLabel *label_10;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSlider *slider_r;
    QSlider *slider_g;
    QSlider *slider_b;
    QHBoxLayout *horizontalLayout_3;
    QLabel *r_value_label;
    QLabel *g_value_label;
    QLabel *b_value_label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1024, 600);
        view = new QGraphicsView(Dialog);
        view->setObjectName(QString::fromUtf8("view"));
        view->setEnabled(true);
        view->setGeometry(QRect(10, 120, 871, 461));
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(580, 0, 311, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setIconSize(QSize(20, 16));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setIconSize(QSize(20, 16));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIconSize(QSize(20, 16));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setIconSize(QSize(20, 16));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, -1, 0, 5);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        line_size = new QLabel(gridLayoutWidget);
        line_size->setObjectName(QString::fromUtf8("line_size"));

        verticalLayout->addWidget(line_size);

        slider_line_size = new QSlider(gridLayoutWidget);
        slider_line_size->setObjectName(QString::fromUtf8("slider_line_size"));
        slider_line_size->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider_line_size);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 0, 411, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Gothic L"));
        label_10->setFont(font);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(890, 0, 131, 301));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        slider_r = new QSlider(widget);
        slider_r->setObjectName(QString::fromUtf8("slider_r"));
        slider_r->setMaximum(255);
        slider_r->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(slider_r);

        slider_g = new QSlider(widget);
        slider_g->setObjectName(QString::fromUtf8("slider_g"));
        slider_g->setMaximum(255);
        slider_g->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(slider_g);

        slider_b = new QSlider(widget);
        slider_b->setObjectName(QString::fromUtf8("slider_b"));
        slider_b->setMaximum(255);
        slider_b->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(slider_b);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        r_value_label = new QLabel(widget);
        r_value_label->setObjectName(QString::fromUtf8("r_value_label"));

        horizontalLayout_3->addWidget(r_value_label);

        g_value_label = new QLabel(widget);
        g_value_label->setObjectName(QString::fromUtf8("g_value_label"));

        horizontalLayout_3->addWidget(g_value_label);

        b_value_label = new QLabel(widget);
        b_value_label->setObjectName(QString::fromUtf8("b_value_label"));

        horizontalLayout_3->addWidget(b_value_label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "Add Square", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Add circle", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Add line", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "Clear", nullptr));
        label->setText(QApplication::translate("Dialog", "Line Size", nullptr));
        line_size->setText(QApplication::translate("Dialog", "0", nullptr));
        label_10->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Example of draws in Qt</span></p><p align=\"center\"><span style=\" font-size:8pt;\">Made by: Esdras Xavier</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Line Color</span></p></body></html>", nullptr));
        r_value_label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        g_value_label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        b_value_label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">0</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">R</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">G</p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\">B</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
