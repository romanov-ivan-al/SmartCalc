#include "controller.h"

namespace s21 {
void Controller::set_data(double x, std::string infix) {
  model_.set_infix(infix);
  model_.set_x(x);
}

std::string Controller::get_result_str() { return model_.get_result_str(); }
}  // namespace s21