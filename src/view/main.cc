#include <QApplication>

#include "../controller/controller.h"
#include "smartcalc.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  SmartCalc w;
  w.show();
  setlocale(LC_NUMERIC, "C");
  return a.exec();
}
