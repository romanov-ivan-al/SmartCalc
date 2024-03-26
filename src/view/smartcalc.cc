#include "smartcalc.h"

#include "../controller/controller.h"
#include "credit.h"
#include "debit.h"
#include "ui_smartcalc.h"

SmartCalc::SmartCalc(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::SmartCalc) {
  ui->setupUi(this);
  connect(ui->Button_0, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_1, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_2, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_3, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_4, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_5, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_6, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_7, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_8, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_9, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_dot, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_open, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_close, SIGNAL(clicked()), this,
          SLOT(input_num_and_func()));
  connect(ui->Button_add, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_sub, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_mul, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_div, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
  connect(ui->Button_X, SIGNAL(clicked()), this, SLOT(input_num_and_func()));
}

SmartCalc::~SmartCalc() { delete ui; }

void SmartCalc::input_num_and_func() {
  QPushButton *button = (QPushButton *)sender();

  QString str = ui->Screen->text() + button->text();

  if (ui->Screen->text() != '0' && ui->Screen->text() != "inf" &&
      ui->Screen->text() != "nan") {
    ui->Screen->setText(str);
  } else if (ui->Screen->text() == '0' && button->text() == '.') {
    ui->Screen->setText(str);
  } else if (ui->Screen->text() == '0' && button->text() == "/") {
    ui->Screen->setText(str);
  } else {
    ui->Screen->setText(button->text());
  }
}

void SmartCalc::on_Button_AC_clicked() {
  ui->Screen->clear();
  ui->Screen->setText("0");

  ui->widget->clearGraphs();
  ui->widget->clearPlottables();
  ui->widget->replot();
}

void SmartCalc::on_Button_sin_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("sin(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "sin(");
  }
}

void SmartCalc::on_Button_asin_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("asin(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "asin(");
  }
}

void SmartCalc::on_Button_cos_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("cos(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "cos(");
  }
}

void SmartCalc::on_Button_acos_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("acos(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "acos(");
  }
}

void SmartCalc::on_Button_tan_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("tan(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "tan(");
  }
}

void SmartCalc::on_Button_atan_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("atan(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "atan(");
  }
}

void SmartCalc::on_Button_ln_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("ln(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "ln(");
  }
}

void SmartCalc::on_Button_log_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("log(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "log(");
  }
}

void SmartCalc::on_Button_degree_clicked() {
  ui->Screen->setText(ui->Screen->text() + "^");
}

void SmartCalc::on_Button_sqrt_clicked() {
  if (ui->Screen->text() == '0') {
    ui->Screen->setText("sqrt(");
  } else {
    ui->Screen->setText(ui->Screen->text() + "sqrt(");
  }
}

void SmartCalc::on_Button_eq_clicked() {
  QString input = ui->Screen->text();
  std::string infix = input.toStdString();
  double x = ui->x_input->text().toDouble();
  control_m.set_data(x, infix);
  std::string result = control_m.get_result_str();
  QString res_str = QString::fromStdString(result);
  ui->Screen->clear();
  ui->Screen->setText(res_str);
}

void SmartCalc::on_Button_mod_clicked() {
  ui->Screen->setText(ui->Screen->text() + "%");
}

void SmartCalc::on_Button_backpase_clicked() {
  QString str_screen = ui->Screen->text();
  str_screen = str_screen.left(str_screen.length() - 1);
  ui->Screen->setText(str_screen);
  if (str_screen == "") {
    ui->Screen->setText("0");
  }
}

void SmartCalc::on_Button_Graph_clicked() {
  QString input = ui->Screen->text();
  std::string infix = input.toStdString();
  double n = ui->x_input->text().toDouble();
  control_m.set_data(n, infix);
  std::string result = control_m.get_result_str();
  if (result != "Value Error") {
    double result = 0;
    h = 0.1;

    QString xB = ui->Xmin_input->text();
    xB = xB.replace(",", ".");
    xBegin = xB.toDouble();

    QString xE = ui->Xmax_input->text();
    xE = xE.replace(",", ".");
    xEnd = xE.toDouble() + h;

    QString yB = ui->Ymin_input->text();
    yB = yB.replace(",", ".");
    double yBegin = yB.toDouble();

    QString yE = ui->Ymax_input->text();
    yE = yE.replace(",", ".");
    double yEnd = yE.toDouble();

    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(yBegin, yEnd);

    N = (xEnd - xBegin) / h + 2;

    for (X = xBegin; X <= xEnd; X += h) {
      x.push_back(X);
      control_m.set_data(X, infix);
      result = std::stod(control_m.get_result_str());
      y.push_back(result);
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();
    x.clear();
    y.clear();
  } else {
    ui->Screen->setText("Value Error");
  }
}

void SmartCalc::on_Credit_clicked() {
  Credit credit_calc;
  credit_calc.setModal(true);
  credit_calc.exec();
}

void SmartCalc::on_Debit_clicked() {
  Debit window;
  window.setModal(true);
  window.exec();
}
