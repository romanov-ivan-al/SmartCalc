/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QGroupBox *groupBox;
    QRadioButton *diff;
    QLabel *label_4;
    QLineEdit *sumcredit;
    QLineEdit *percent;
    QLabel *label_2;
    QLineEdit *loan_term;
    QLabel *label_1;
    QRadioButton *annuit;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *month_pay;
    QLabel *percent_pay;
    QLabel *all_sum;
    QPushButton *pushButton;

    void setupUi(QDialog *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName("Credit");
        Credit->resize(520, 391);
        Credit->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(Credit);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 20, 481, 191));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        diff = new QRadioButton(groupBox);
        diff->setObjectName("diff");
        diff->setGeometry(QRect(260, 160, 171, 20));
        diff->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	font: 14px Courier New;\n"
"	color: white;\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 150, 241, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        sumcredit = new QLineEdit(groupBox);
        sumcredit->setObjectName("sumcredit");
        sumcredit->setGeometry(QRect(260, 20, 131, 21));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush1(QColor(127, 127, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        QBrush brush2(QColor(170, 170, 170, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        QBrush brush5(QColor(208, 208, 208, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        QBrush brush6(QColor(64, 65, 66, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        QBrush brush7(QColor(55, 55, 55, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        QBrush brush8(QColor(52, 52, 52, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        QBrush brush9(QColor(160, 160, 160, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        QBrush brush10(QColor(255, 51, 51, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        QBrush brush11(QColor(46, 47, 48, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        QBrush brush12(QColor(53, 54, 55, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        sumcredit->setPalette(palette);
        sumcredit->setStyleSheet(QString::fromUtf8(""));
        percent = new QLineEdit(groupBox);
        percent->setObjectName("percent");
        percent->setGeometry(QRect(260, 100, 131, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        percent->setPalette(palette1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 50, 131, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        loan_term = new QLineEdit(groupBox);
        loan_term->setObjectName("loan_term");
        loan_term->setGeometry(QRect(260, 60, 131, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        loan_term->setPalette(palette2);
        loan_term->setStyleSheet(QString::fromUtf8(""));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(80, 10, 141, 41));
        label_1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        annuit = new QRadioButton(groupBox);
        annuit->setObjectName("annuit");
        annuit->setGeometry(QRect(260, 140, 121, 20));
        annuit->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	font: 14px Courier New;\n"
"	color: white;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 90, 171, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 20, 31, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("PT Serif")});
        font.setPointSize(14);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(400, 60, 41, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setBold(false);
        font1.setItalic(false);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(400, 100, 41, 21));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        groupBox_2 = new QGroupBox(Credit);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 260, 481, 121));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Courier")});
        font2.setBold(false);
        font2.setItalic(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        groupBox_2->setFont(font2);
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 10, 181, 21));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 30, 201, 41));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 70, 161, 41));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 16px Courier New;\n"
"	color: white;\n"
"}"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        month_pay = new QLabel(groupBox_2);
        month_pay->setObjectName("month_pay");
        month_pay->setGeometry(QRect(250, 0, 231, 31));
        month_pay->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14px Courier New;\n"
"	color: white;\n"
"}"));
        month_pay->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        percent_pay = new QLabel(groupBox_2);
        percent_pay->setObjectName("percent_pay");
        percent_pay->setGeometry(QRect(250, 30, 231, 41));
        percent_pay->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14px Courier New;\n"
"	color: white;\n"
"}"));
        all_sum = new QLabel(groupBox_2);
        all_sum->setObjectName("all_sum");
        all_sum->setGeometry(QRect(250, 70, 231, 41));
        all_sum->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font: 14px Courier New;\n"
"	color: white;\n"
"}"));
        all_sum->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pushButton = new QPushButton(Credit);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 220, 481, 31));
        pushButton->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QDialog *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Credit", nullptr));
        groupBox->setTitle(QString());
        diff->setText(QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_1->setText(QCoreApplication::translate("Credit", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        annuit->setText(QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\320\265\320\275\321\202\320\275\321\213\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\342\202\275", nullptr));
        label_9->setText(QCoreApplication::translate("Credit", "\320\274\320\265\321\201.", nullptr));
        label_10->setText(QCoreApplication::translate("Credit", "%", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\321\221\320\266", nullptr));
        label_6->setText(QCoreApplication::translate("Credit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("Credit", "\320\224\320\276\320\273\320\263 + \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        month_pay->setText(QCoreApplication::translate("Credit", "0", nullptr));
        percent_pay->setText(QCoreApplication::translate("Credit", "0", nullptr));
        all_sum->setText(QCoreApplication::translate("Credit", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("Credit", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
