#ifndef SRC_MODEL_MODEL_H
#define SRC_MODEL_MODEL_H

#include <cmath>
#include <iostream>
#include <stack>
#include <string>

namespace s21 {
class Model {
 public:
  Model() : x_{0}, result_{0} {};
  ~Model(){};
  void set_infix(std::string infix);
  void set_x(double num);
  std::string get_postfix();
  double get_result();
  std::string get_result_str();
  bool isValidExpression(const std::string& expression);

 private:
  std::string infix_;
  std::string postfix_;
  double x_;
  double result_;

  // Convert infix to postfix
  int is_digit(char x);
  int is_operator(char symbol);
  int is_function(char x);
  int functions_parse(int i, const std::string& infix, char& result);
  int add_priority(char x);
  int parser_input(const std::string& infix, std::string& postfix);

  // Calculate
  int get_num(int i, std::string& num, const std::string& postfix);
  int find_function(char x);
  int calculate_result(double* x, double* result, const std::string& postfix);

  // check input
  bool isOperator(char c);
  bool isUnaryOperator(char c);
  bool isFunction(const std::string& str);
  bool isCorrectBrackets(int i, int len, const std::string& str);
};

}  // namespace s21

#endif