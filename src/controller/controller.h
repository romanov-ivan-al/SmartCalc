#ifndef SRC_CONTROLLER_CONTROLLER_CPP
#define SRC_CONTROLLER_CONTROLLER_CPP

#include "../model/model.h"

namespace s21 {
class Controller {
 private:
  Model model_;

 public:
  Controller() = default;
  ~Controller() = default;
  void set_data(double x, std::string infix);
  std::string get_result_str();
};
}  // namespace s21

#endif  // SRC_CONTROLLER_CONTROLLER_CPP