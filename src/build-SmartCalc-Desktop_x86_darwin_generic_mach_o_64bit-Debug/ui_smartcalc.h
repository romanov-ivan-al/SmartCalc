/********************************************************************************
** Form generated from reading UI file 'smartcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTCALC_H
#define UI_SMARTCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SmartCalc
{
public:
    QWidget *centralwidget;
    QPushButton *Button_0;
    QPushButton *Button_dot;
    QPushButton *Button_eq;
    QPushButton *Button_3;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_6;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_9;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_add;
    QPushButton *Button_open;
    QPushButton *Button_mul;
    QPushButton *Button_sub;
    QPushButton *Button_close;
    QPushButton *Button_mod;
    QPushButton *Button_degree;
    QPushButton *Button_div;
    QPushButton *Button_log;
    QPushButton *Button_ln;
    QPushButton *Button_atan;
    QPushButton *Button_asin;
    QPushButton *Button_acos;
    QPushButton *Button_tan;
    QPushButton *Button_sin;
    QPushButton *Button_cos;
    QPushButton *Button_AC;
    QPushButton *Button_backpase;
    QPushButton *Button_sqrt;
    QLabel *Screen;
    QLineEdit *x_input;
    QLabel *label_X;
    QPushButton *Button_X;
    QCustomPlot *widget;
    QPushButton *Button_Graph;
    QLabel *label_Xmax;
    QLabel *label_Xmin;
    QLabel *label_Ymax;
    QLabel *label_Ymin;
    QDoubleSpinBox *Xmax_input;
    QDoubleSpinBox *Xmin_input;
    QDoubleSpinBox *Ymin_input;
    QDoubleSpinBox *Ymax_input;
    QPushButton *Credit;
    QPushButton *Debit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmartCalc)
    {
        if (SmartCalc->objectName().isEmpty())
            SmartCalc->setObjectName("SmartCalc");
        SmartCalc->resize(1130, 555);
        centralwidget = new QWidget(SmartCalc);
        centralwidget->setObjectName("centralwidget");
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName("Button_0");
        Button_0->setGeometry(QRect(10, 360, 81, 81));
        QFont font;
        font.setPointSize(20);
        Button_0->setFont(font);
        Button_dot = new QPushButton(centralwidget);
        Button_dot->setObjectName("Button_dot");
        Button_dot->setGeometry(QRect(100, 360, 81, 81));
        Button_dot->setFont(font);
        Button_eq = new QPushButton(centralwidget);
        Button_eq->setObjectName("Button_eq");
        Button_eq->setGeometry(QRect(190, 360, 81, 81));
        Button_eq->setFont(font);
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName("Button_3");
        Button_3->setGeometry(QRect(190, 280, 81, 81));
        Button_3->setFont(font);
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName("Button_1");
        Button_1->setGeometry(QRect(10, 280, 81, 81));
        Button_1->setFont(font);
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName("Button_2");
        Button_2->setGeometry(QRect(100, 280, 81, 81));
        Button_2->setFont(font);
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName("Button_6");
        Button_6->setGeometry(QRect(190, 200, 81, 81));
        Button_6->setFont(font);
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName("Button_4");
        Button_4->setGeometry(QRect(10, 200, 81, 81));
        Button_4->setFont(font);
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName("Button_5");
        Button_5->setGeometry(QRect(100, 200, 81, 81));
        Button_5->setFont(font);
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName("Button_9");
        Button_9->setGeometry(QRect(190, 120, 81, 81));
        Button_9->setFont(font);
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName("Button_7");
        Button_7->setGeometry(QRect(10, 120, 81, 81));
        Button_7->setFont(font);
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName("Button_8");
        Button_8->setGeometry(QRect(100, 120, 81, 81));
        Button_8->setFont(font);
        Button_add = new QPushButton(centralwidget);
        Button_add->setObjectName("Button_add");
        Button_add->setGeometry(QRect(290, 360, 81, 81));
        Button_add->setFont(font);
        Button_open = new QPushButton(centralwidget);
        Button_open->setObjectName("Button_open");
        Button_open->setGeometry(QRect(290, 120, 81, 81));
        Button_open->setFont(font);
        Button_mul = new QPushButton(centralwidget);
        Button_mul->setObjectName("Button_mul");
        Button_mul->setGeometry(QRect(290, 200, 81, 81));
        Button_mul->setFont(font);
        Button_sub = new QPushButton(centralwidget);
        Button_sub->setObjectName("Button_sub");
        Button_sub->setGeometry(QRect(290, 280, 81, 81));
        Button_sub->setFont(font);
        Button_close = new QPushButton(centralwidget);
        Button_close->setObjectName("Button_close");
        Button_close->setGeometry(QRect(380, 120, 81, 81));
        Button_close->setFont(font);
        Button_mod = new QPushButton(centralwidget);
        Button_mod->setObjectName("Button_mod");
        Button_mod->setGeometry(QRect(380, 360, 81, 81));
        Button_mod->setFont(font);
        Button_degree = new QPushButton(centralwidget);
        Button_degree->setObjectName("Button_degree");
        Button_degree->setGeometry(QRect(380, 280, 81, 81));
        Button_degree->setFont(font);
        Button_div = new QPushButton(centralwidget);
        Button_div->setObjectName("Button_div");
        Button_div->setGeometry(QRect(380, 200, 81, 81));
        Button_div->setFont(font);
        Button_log = new QPushButton(centralwidget);
        Button_log->setObjectName("Button_log");
        Button_log->setGeometry(QRect(560, 360, 81, 81));
        Button_log->setFont(font);
        Button_ln = new QPushButton(centralwidget);
        Button_ln->setObjectName("Button_ln");
        Button_ln->setGeometry(QRect(470, 360, 81, 81));
        Button_ln->setFont(font);
        Button_atan = new QPushButton(centralwidget);
        Button_atan->setObjectName("Button_atan");
        Button_atan->setGeometry(QRect(560, 280, 81, 81));
        Button_atan->setFont(font);
        Button_asin = new QPushButton(centralwidget);
        Button_asin->setObjectName("Button_asin");
        Button_asin->setGeometry(QRect(560, 120, 81, 81));
        Button_asin->setFont(font);
        Button_acos = new QPushButton(centralwidget);
        Button_acos->setObjectName("Button_acos");
        Button_acos->setGeometry(QRect(560, 200, 81, 81));
        Button_acos->setFont(font);
        Button_tan = new QPushButton(centralwidget);
        Button_tan->setObjectName("Button_tan");
        Button_tan->setGeometry(QRect(470, 280, 81, 81));
        Button_tan->setFont(font);
        Button_sin = new QPushButton(centralwidget);
        Button_sin->setObjectName("Button_sin");
        Button_sin->setGeometry(QRect(470, 120, 81, 81));
        Button_sin->setFont(font);
        Button_cos = new QPushButton(centralwidget);
        Button_cos->setObjectName("Button_cos");
        Button_cos->setGeometry(QRect(470, 200, 81, 81));
        Button_cos->setFont(font);
        Button_AC = new QPushButton(centralwidget);
        Button_AC->setObjectName("Button_AC");
        Button_AC->setGeometry(QRect(10, 80, 81, 41));
        Button_backpase = new QPushButton(centralwidget);
        Button_backpase->setObjectName("Button_backpase");
        Button_backpase->setGeometry(QRect(100, 80, 81, 41));
        Button_sqrt = new QPushButton(centralwidget);
        Button_sqrt->setObjectName("Button_sqrt");
        Button_sqrt->setGeometry(QRect(190, 80, 81, 41));
        Screen = new QLabel(centralwidget);
        Screen->setObjectName("Screen");
        Screen->setGeometry(QRect(7, 9, 631, 31));
        Screen->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border-bottom: 1px solid gray;\n"
"  background-color: black;\n"
"  border: 1px solig white;\n"
"  color: white;\n"
"}"));
        Screen->setTextFormat(Qt::AutoText);
        Screen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        x_input = new QLineEdit(centralwidget);
        x_input->setObjectName("x_input");
        x_input->setGeometry(QRect(420, 90, 201, 21));
        x_input->setDragEnabled(false);
        label_X = new QLabel(centralwidget);
        label_X->setObjectName("label_X");
        label_X->setGeometry(QRect(400, 90, 21, 16));
        Button_X = new QPushButton(centralwidget);
        Button_X->setObjectName("Button_X");
        Button_X->setGeometry(QRect(290, 80, 81, 41));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(700, 20, 381, 351));
        Button_Graph = new QPushButton(centralwidget);
        Button_Graph->setObjectName("Button_Graph");
        Button_Graph->setGeometry(QRect(670, 380, 131, 41));
        label_Xmax = new QLabel(centralwidget);
        label_Xmax->setObjectName("label_Xmax");
        label_Xmax->setGeometry(QRect(820, 380, 41, 16));
        label_Xmin = new QLabel(centralwidget);
        label_Xmin->setObjectName("label_Xmin");
        label_Xmin->setGeometry(QRect(820, 410, 41, 16));
        label_Ymax = new QLabel(centralwidget);
        label_Ymax->setObjectName("label_Ymax");
        label_Ymax->setGeometry(QRect(970, 380, 41, 20));
        label_Ymin = new QLabel(centralwidget);
        label_Ymin->setObjectName("label_Ymin");
        label_Ymin->setGeometry(QRect(970, 410, 41, 20));
        Xmax_input = new QDoubleSpinBox(centralwidget);
        Xmax_input->setObjectName("Xmax_input");
        Xmax_input->setGeometry(QRect(870, 380, 91, 22));
        Xmax_input->setMinimum(-1000000.000000000000000);
        Xmax_input->setMaximum(1000000.000000000000000);
        Xmax_input->setValue(5.000000000000000);
        Xmin_input = new QDoubleSpinBox(centralwidget);
        Xmin_input->setObjectName("Xmin_input");
        Xmin_input->setGeometry(QRect(870, 410, 91, 22));
        Xmin_input->setMinimum(-1000000.000000000000000);
        Xmin_input->setMaximum(1000000.000000000000000);
        Xmin_input->setValue(-5.000000000000000);
        Ymin_input = new QDoubleSpinBox(centralwidget);
        Ymin_input->setObjectName("Ymin_input");
        Ymin_input->setGeometry(QRect(1010, 410, 91, 22));
        Ymin_input->setMinimum(-1000000.000000000000000);
        Ymin_input->setMaximum(1000000.000000000000000);
        Ymin_input->setValue(-5.000000000000000);
        Ymax_input = new QDoubleSpinBox(centralwidget);
        Ymax_input->setObjectName("Ymax_input");
        Ymax_input->setGeometry(QRect(1010, 380, 91, 22));
        Ymax_input->setMinimum(-1000000.000000000000000);
        Ymax_input->setMaximum(1000000.000000000000000);
        Ymax_input->setValue(5.000000000000000);
        Credit = new QPushButton(centralwidget);
        Credit->setObjectName("Credit");
        Credit->setGeometry(QRect(670, 450, 201, 41));
        Debit = new QPushButton(centralwidget);
        Debit->setObjectName("Debit");
        Debit->setGeometry(QRect(900, 450, 201, 41));
        SmartCalc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmartCalc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1130, 24));
        SmartCalc->setMenuBar(menubar);
        statusbar = new QStatusBar(SmartCalc);
        statusbar->setObjectName("statusbar");
        SmartCalc->setStatusBar(statusbar);

        retranslateUi(SmartCalc);

        QMetaObject::connectSlotsByName(SmartCalc);
    } // setupUi

    void retranslateUi(QMainWindow *SmartCalc)
    {
        SmartCalc->setWindowTitle(QCoreApplication::translate("SmartCalc", "SmartCalc", nullptr));
        Button_0->setText(QCoreApplication::translate("SmartCalc", "0", nullptr));
        Button_dot->setText(QCoreApplication::translate("SmartCalc", ".", nullptr));
        Button_eq->setText(QCoreApplication::translate("SmartCalc", "=", nullptr));
        Button_3->setText(QCoreApplication::translate("SmartCalc", "3", nullptr));
        Button_1->setText(QCoreApplication::translate("SmartCalc", "1", nullptr));
        Button_2->setText(QCoreApplication::translate("SmartCalc", "2", nullptr));
        Button_6->setText(QCoreApplication::translate("SmartCalc", "6", nullptr));
        Button_4->setText(QCoreApplication::translate("SmartCalc", "4", nullptr));
        Button_5->setText(QCoreApplication::translate("SmartCalc", "5", nullptr));
        Button_9->setText(QCoreApplication::translate("SmartCalc", "9", nullptr));
        Button_7->setText(QCoreApplication::translate("SmartCalc", "7", nullptr));
        Button_8->setText(QCoreApplication::translate("SmartCalc", "8", nullptr));
        Button_add->setText(QCoreApplication::translate("SmartCalc", "+", nullptr));
        Button_open->setText(QCoreApplication::translate("SmartCalc", "(", nullptr));
#if QT_CONFIG(shortcut)
        Button_open->setShortcut(QCoreApplication::translate("SmartCalc", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        Button_mul->setText(QCoreApplication::translate("SmartCalc", "*", nullptr));
        Button_sub->setText(QCoreApplication::translate("SmartCalc", "-", nullptr));
        Button_close->setText(QCoreApplication::translate("SmartCalc", ")", nullptr));
        Button_mod->setText(QCoreApplication::translate("SmartCalc", "%", nullptr));
        Button_degree->setText(QCoreApplication::translate("SmartCalc", "\313\206", nullptr));
        Button_div->setText(QCoreApplication::translate("SmartCalc", "/", nullptr));
        Button_log->setText(QCoreApplication::translate("SmartCalc", "log", nullptr));
        Button_ln->setText(QCoreApplication::translate("SmartCalc", "ln", nullptr));
        Button_atan->setText(QCoreApplication::translate("SmartCalc", "atan", nullptr));
        Button_asin->setText(QCoreApplication::translate("SmartCalc", "asin", nullptr));
        Button_acos->setText(QCoreApplication::translate("SmartCalc", "acos", nullptr));
        Button_tan->setText(QCoreApplication::translate("SmartCalc", "tan", nullptr));
        Button_sin->setText(QCoreApplication::translate("SmartCalc", "sin", nullptr));
        Button_cos->setText(QCoreApplication::translate("SmartCalc", "cos", nullptr));
        Button_AC->setText(QCoreApplication::translate("SmartCalc", "AC", nullptr));
        Button_backpase->setText(QCoreApplication::translate("SmartCalc", "<--", nullptr));
        Button_sqrt->setText(QCoreApplication::translate("SmartCalc", "sqrt", nullptr));
        Screen->setText(QCoreApplication::translate("SmartCalc", "0", nullptr));
        x_input->setText(QCoreApplication::translate("SmartCalc", "0", nullptr));
        label_X->setText(QCoreApplication::translate("SmartCalc", "X:", nullptr));
        Button_X->setText(QCoreApplication::translate("SmartCalc", "x", nullptr));
        Button_Graph->setText(QCoreApplication::translate("SmartCalc", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_Xmax->setText(QCoreApplication::translate("SmartCalc", "Xmax:", nullptr));
        label_Xmin->setText(QCoreApplication::translate("SmartCalc", "Xmin:", nullptr));
        label_Ymax->setText(QCoreApplication::translate("SmartCalc", "Ymax:", nullptr));
        label_Ymin->setText(QCoreApplication::translate("SmartCalc", "Ymin:", nullptr));
        Credit->setText(QCoreApplication::translate("SmartCalc", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271", nullptr));
        Debit->setText(QCoreApplication::translate("SmartCalc", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartCalc: public Ui_SmartCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTCALC_H
