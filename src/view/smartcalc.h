#ifndef SMARTCALC_H
#define SMARTCALC_H

#include <locale.h>

#include <QMainWindow>
#include <QVector>
#include "../controller/controller.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class SmartCalc;
}
QT_END_NAMESPACE

class SmartCalc : public QMainWindow {
  Q_OBJECT

 public:
  SmartCalc(QWidget *parent = nullptr);
  ~SmartCalc();

 private slots:
  void input_num_and_func();
  void on_Button_AC_clicked();
  void on_Button_sin_clicked();
  void on_Button_asin_clicked();
  void on_Button_cos_clicked();
  void on_Button_acos_clicked();
  void on_Button_tan_clicked();
  void on_Button_atan_clicked();
  void on_Button_ln_clicked();
  void on_Button_log_clicked();
  void on_Button_degree_clicked();
  void on_Button_sqrt_clicked();
  void on_Button_eq_clicked();
  void on_Button_mod_clicked();
  void on_Button_backpase_clicked();
  void on_Button_Graph_clicked();
  void on_Credit_clicked();
  void on_Debit_clicked();

private:
  Ui::SmartCalc *ui;
  double xBegin, xEnd, h, X;
  int N;
  QVector<double> x, y;
  s21::Controller control_m;
};
#endif  // SMARTCALC_H
