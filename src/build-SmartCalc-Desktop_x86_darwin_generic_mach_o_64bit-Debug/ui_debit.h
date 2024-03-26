/********************************************************************************
** Form generated from reading UI file 'debit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBIT_H
#define UI_DEBIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Debit
{
public:
    QComboBox *comboBox_data;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QCheckBox *checkBox_kapital;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox_plus;
    QComboBox *comboBox_period;
    QComboBox *comboBox_minus;
    QDoubleSpinBox *doubleSpinBox_sum;
    QSpinBox *spinBox_data;
    QDoubleSpinBox *doubleSpinBox_stavka;
    QDoubleSpinBox *doubleSpinBox_nalog;
    QDoubleSpinBox *doubleSpinBox_plus;
    QDoubleSpinBox *doubleSpinBox_min;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_result;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_result_procent;
    QLabel *label_12;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBox_result_nalog;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QDoubleSpinBox *doubleSpinBox_result_sum;

    void setupUi(QDialog *Debit)
    {
        if (Debit->objectName().isEmpty())
            Debit->setObjectName("Debit");
        Debit->resize(472, 532);
        comboBox_data = new QComboBox(Debit);
        comboBox_data->addItem(QString());
        comboBox_data->addItem(QString());
        comboBox_data->addItem(QString());
        comboBox_data->setObjectName("comboBox_data");
        comboBox_data->setGeometry(QRect(340, 70, 101, 25));
        label = new QLabel(Debit);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 111, 20));
        label_2 = new QLabel(Debit);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 131, 20));
        label_3 = new QLabel(Debit);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 151, 20));
        label_4 = new QLabel(Debit);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 150, 161, 20));
        label_5 = new QLabel(Debit);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 190, 171, 21));
        checkBox_kapital = new QCheckBox(Debit);
        checkBox_kapital->setObjectName("checkBox_kapital");
        checkBox_kapital->setGeometry(QRect(200, 230, 241, 21));
        label_6 = new QLabel(Debit);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 270, 101, 17));
        label_7 = new QLabel(Debit);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 310, 101, 17));
        comboBox_plus = new QComboBox(Debit);
        comboBox_plus->addItem(QString());
        comboBox_plus->addItem(QString());
        comboBox_plus->addItem(QString());
        comboBox_plus->addItem(QString());
        comboBox_plus->setObjectName("comboBox_plus");
        comboBox_plus->setGeometry(QRect(340, 270, 111, 25));
        comboBox_period = new QComboBox(Debit);
        comboBox_period->addItem(QString());
        comboBox_period->addItem(QString());
        comboBox_period->addItem(QString());
        comboBox_period->addItem(QString());
        comboBox_period->addItem(QString());
        comboBox_period->addItem(QString());
        comboBox_period->addItem(QString());
        comboBox_period->setObjectName("comboBox_period");
        comboBox_period->setGeometry(QRect(200, 190, 131, 25));
        comboBox_minus = new QComboBox(Debit);
        comboBox_minus->addItem(QString());
        comboBox_minus->addItem(QString());
        comboBox_minus->addItem(QString());
        comboBox_minus->addItem(QString());
        comboBox_minus->setObjectName("comboBox_minus");
        comboBox_minus->setGeometry(QRect(340, 310, 111, 25));
        doubleSpinBox_sum = new QDoubleSpinBox(Debit);
        doubleSpinBox_sum->setObjectName("doubleSpinBox_sum");
        doubleSpinBox_sum->setGeometry(QRect(200, 30, 131, 26));
        doubleSpinBox_sum->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_sum->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_sum->setKeyboardTracking(true);
        doubleSpinBox_sum->setMaximum(9999999999999.990234375000000);
        spinBox_data = new QSpinBox(Debit);
        spinBox_data->setObjectName("spinBox_data");
        spinBox_data->setGeometry(QRect(200, 70, 131, 26));
        spinBox_data->setLayoutDirection(Qt::LeftToRight);
        spinBox_data->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_data->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_data->setKeyboardTracking(true);
        spinBox_data->setMaximum(100000000);
        doubleSpinBox_stavka = new QDoubleSpinBox(Debit);
        doubleSpinBox_stavka->setObjectName("doubleSpinBox_stavka");
        doubleSpinBox_stavka->setGeometry(QRect(200, 110, 131, 26));
        doubleSpinBox_stavka->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_stavka->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_stavka->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_stavka->setKeyboardTracking(true);
        doubleSpinBox_stavka->setMaximum(100.000000000000000);
        doubleSpinBox_nalog = new QDoubleSpinBox(Debit);
        doubleSpinBox_nalog->setObjectName("doubleSpinBox_nalog");
        doubleSpinBox_nalog->setGeometry(QRect(200, 150, 131, 26));
        doubleSpinBox_nalog->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_nalog->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_nalog->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_nalog->setKeyboardTracking(true);
        doubleSpinBox_nalog->setMaximum(100.000000000000000);
        doubleSpinBox_plus = new QDoubleSpinBox(Debit);
        doubleSpinBox_plus->setObjectName("doubleSpinBox_plus");
        doubleSpinBox_plus->setGeometry(QRect(200, 270, 131, 26));
        doubleSpinBox_plus->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_plus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_plus->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_plus->setKeyboardTracking(true);
        doubleSpinBox_plus->setMaximum(9999999999999.990234375000000);
        doubleSpinBox_min = new QDoubleSpinBox(Debit);
        doubleSpinBox_min->setObjectName("doubleSpinBox_min");
        doubleSpinBox_min->setGeometry(QRect(200, 310, 131, 26));
        doubleSpinBox_min->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_min->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_min->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_min->setKeyboardTracking(true);
        doubleSpinBox_min->setMaximum(9999999999999.990234375000000);
        label_8 = new QLabel(Debit);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(340, 110, 21, 31));
        label_9 = new QLabel(Debit);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(340, 150, 21, 31));
        label_10 = new QLabel(Debit);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(340, 30, 21, 31));
        pushButton_result = new QPushButton(Debit);
        pushButton_result->setObjectName("pushButton_result");
        pushButton_result->setGeometry(QRect(20, 360, 431, 41));
        label_11 = new QLabel(Debit);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(420, 420, 21, 31));
        doubleSpinBox_result_procent = new QDoubleSpinBox(Debit);
        doubleSpinBox_result_procent->setObjectName("doubleSpinBox_result_procent");
        doubleSpinBox_result_procent->setGeometry(QRect(280, 420, 131, 26));
        doubleSpinBox_result_procent->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_result_procent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_result_procent->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_result_procent->setKeyboardTracking(true);
        doubleSpinBox_result_procent->setMaximum(9999999999999.990234375000000);
        label_12 = new QLabel(Debit);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 420, 171, 20));
        label_13 = new QLabel(Debit);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 450, 111, 20));
        doubleSpinBox_result_nalog = new QDoubleSpinBox(Debit);
        doubleSpinBox_result_nalog->setObjectName("doubleSpinBox_result_nalog");
        doubleSpinBox_result_nalog->setGeometry(QRect(280, 450, 131, 26));
        doubleSpinBox_result_nalog->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_result_nalog->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_result_nalog->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_result_nalog->setKeyboardTracking(true);
        doubleSpinBox_result_nalog->setMaximum(9999999999999.990234375000000);
        label_14 = new QLabel(Debit);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(420, 450, 21, 31));
        label_15 = new QLabel(Debit);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(420, 480, 21, 31));
        label_16 = new QLabel(Debit);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 480, 251, 20));
        doubleSpinBox_result_sum = new QDoubleSpinBox(Debit);
        doubleSpinBox_result_sum->setObjectName("doubleSpinBox_result_sum");
        doubleSpinBox_result_sum->setGeometry(QRect(280, 480, 131, 26));
        doubleSpinBox_result_sum->setLayoutDirection(Qt::LeftToRight);
        doubleSpinBox_result_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_result_sum->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_result_sum->setKeyboardTracking(true);
        doubleSpinBox_result_sum->setMaximum(9999999999999.990234375000000);

        retranslateUi(Debit);

        QMetaObject::connectSlotsByName(Debit);
    } // setupUi

    void retranslateUi(QDialog *Debit)
    {
        Debit->setWindowTitle(QCoreApplication::translate("Debit", "Dialog", nullptr));
        comboBox_data->setItemText(0, QCoreApplication::translate("Debit", "\320\264\320\275\320\265\320\271", nullptr));
        comboBox_data->setItemText(1, QCoreApplication::translate("Debit", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        comboBox_data->setItemText(2, QCoreApplication::translate("Debit", "\320\273\320\265\321\202", nullptr));

        label->setText(QCoreApplication::translate("Debit", "\321\201\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Debit", "\321\201\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("Debit", "\320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Debit", "\320\275\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 \320\246\320\221", nullptr));
        label_5->setText(QCoreApplication::translate("Debit", "\320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        checkBox_kapital->setText(QCoreApplication::translate("Debit", "\320\272\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_6->setText(QCoreApplication::translate("Debit", "\320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("Debit", "\321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        comboBox_plus->setItemText(0, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        comboBox_plus->setItemText(1, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        comboBox_plus->setItemText(2, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox_plus->setItemText(3, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        comboBox_period->setItemText(0, QCoreApplication::translate("Debit", "\320\272\320\260\320\266\320\264\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        comboBox_period->setItemText(1, QCoreApplication::translate("Debit", "\320\272\320\260\320\266\320\264\321\203\321\216 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        comboBox_period->setItemText(2, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        comboBox_period->setItemText(3, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        comboBox_period->setItemText(4, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox_period->setItemText(5, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        comboBox_period->setItemText(6, QCoreApplication::translate("Debit", "\320\262 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

        comboBox_minus->setItemText(0, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        comboBox_minus->setItemText(1, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        comboBox_minus->setItemText(2, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox_minus->setItemText(3, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        label_8->setText(QCoreApplication::translate("Debit", "%", nullptr));
        label_9->setText(QCoreApplication::translate("Debit", "%", nullptr));
        label_10->setText(QCoreApplication::translate("Debit", "\342\202\275", nullptr));
        pushButton_result->setText(QCoreApplication::translate("Debit", "\320\240\320\260\321\201\321\207\320\265\321\202", nullptr));
        label_11->setText(QCoreApplication::translate("Debit", "\342\202\275", nullptr));
        label_12->setText(QCoreApplication::translate("Debit", "\320\275\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_13->setText(QCoreApplication::translate("Debit", "\321\201\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260", nullptr));
        label_14->setText(QCoreApplication::translate("Debit", "\342\202\275", nullptr));
        label_15->setText(QCoreApplication::translate("Debit", "\342\202\275", nullptr));
        label_16->setText(QCoreApplication::translate("Debit", "\321\201\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Debit: public Ui_Debit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBIT_H
