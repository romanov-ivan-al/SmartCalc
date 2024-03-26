#include "model.h"

#include <stack>
#include <unordered_map>

namespace s21 {
void Model::set_infix(std::string infix) { infix_ = infix; }

std::string Model::get_postfix() {
  parser_input(infix_, postfix_);
  return postfix_;
}

int Model::is_digit(char x) {
  return (x >= '0' && x <= '9') || x == '.' || x == 'x';
}

int Model::is_operator(char symbol) {
  return (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' ||
          symbol == '^' || symbol == '%');
}

int Model::is_function(char x) {
  static const std::unordered_map<char, int> function_map{
      {'s', 1}, {'c', 1}, {'l', 1}, {'a', 1}, {'t', 1}};
  return function_map.count(x);
}

int Model::functions_parse(int i, const std::string& infix, char& result) {
  static const std::unordered_map<std::string, char> function_map{
      {"atan", 'd'}, {"acos", 'b'}, {"cos", 'c'},  {"tan", 't'}, {"log", 'l'},
      {"asin", 'a'}, {"sin", 's'},  {"sqrt", 'e'}, {"ln", 'n'}};
  int end_func = infix.substr(i, 5).find("(", 0);
  std::string func = infix.substr(i, end_func);
  if (function_map.count(func)) {
    result = function_map.at(func);
    return i + func.length() - 1;
  }
  return i;
}

int Model::add_priority(char x) {
  static const std::unordered_map<char, int> priority_map{
      {'+', 1}, {'-', 1}, {'/', 2}, {'*', 2}, {'%', 2},
      {'^', 3}, {'s', 4}, {'c', 4}, {'a', 4}, {'l', 4},
      {'t', 4}, {'b', 4}, {'d', 4}, {'e', 4}, {'n', 4}};
  return priority_map.count(x) ? priority_map.at(x) : 0;
}

int Model::parser_input(const std::string& infix, std::string& postfix) {
  // int j = 0;
  std::stack<char> Stack;

  for (size_t i = 0; i < infix.size(); ++i) {
    if (infix[i] == '(') {
      Stack.push(infix[i]);
    } else if (infix[i] == ')') {
      while (!Stack.empty() && Stack.top() != '(') {
        postfix += Stack.top();
        postfix += ' ';
        Stack.pop();
      }
      if (!Stack.empty()) {
        Stack.pop();
      }
    } else if (is_digit(infix[i])) {
      while (is_digit(infix[i])) {
        postfix += infix[i++];
      }
      postfix += ' ';
      i--;
    } else if (is_operator(infix[i])) {
      if (Stack.empty() || add_priority(infix[i]) > add_priority(Stack.top())) {
        Stack.push(infix[i]);
      } else {
        while (!Stack.empty() && Stack.top() != '(') {
          postfix += Stack.top();
          postfix += ' ';
          Stack.pop();
        }
        Stack.push(infix[i]);
      }
    } else if (is_function(infix[i])) {
      char function = 0;
      i = functions_parse(i, infix, function);
      Stack.push(function);
    }
  }
  while (!Stack.empty()) {
    postfix += Stack.top();
    postfix += ' ';
    Stack.pop();
  }
  return 0;
}

// Calculate

int Model::get_num(int i, std::string& num, const std::string& postfix) {
  int index = i;
  // int j = 0;
  while (is_digit(postfix[index])) {
    num += postfix[index];
    index++;
    // j++;
  }
  return index;
}

int Model::find_function(char x) {
  int result = 0;
  if (x == 's' || x == 'c' || x == 'a' || x == 'l' || x == 't' || x == 'b' ||
      x == 'd' || x == 'e' || x == 'n') {
    result = 1;
  }
  return result;
}

int Model::calculate_result(double* x, double* result,
                            const std::string& postfix) {
  size_t i = 0;
  double a = 0;
  double b = 0;
  // double stack_status = 0;

  std::stack<double> Stack;
  while (i < postfix.size()) {
    if (is_digit(postfix[i])) {
      std::string num;
      i = get_num(i, num, postfix);
      if (num == "x") {
        // std::cout << "NUM:" << num << std::endl;
        Stack.push(*x);
      } else {
        double num_d = std::stod(num);
        Stack.push(num_d);
      }
    }
    if (is_operator(postfix[i])) {
      if (postfix[i] == '+') {
        a = Stack.top();
        Stack.pop();
        if (!Stack.empty()) {
          b = Stack.top();
          Stack.pop();
        }
        Stack.push(a + b);
      }
      if (postfix[i] == '-') {
        b = Stack.top();
        Stack.pop();
        if (!Stack.empty()) {
          a = Stack.top();
          Stack.pop();
        }
        Stack.push(a - b);
      }
      if (postfix[i] == '*') {
        a = Stack.top();
        Stack.pop();
        b = Stack.top();
        Stack.pop();
        Stack.push(a * b);
      }
      if (postfix[i] == '/') {
        b = Stack.top();
        Stack.pop();
        a = Stack.top();
        Stack.pop();
        Stack.push(a / b);
      }
      if (postfix[i] == '^') {
        b = Stack.top();
        Stack.pop();
        a = Stack.top();
        Stack.pop();
        Stack.push(std::pow(a, b));
      }
      if (postfix[i] == '%') {
        b = Stack.top();
        Stack.pop();
        a = Stack.top();
        Stack.pop();
        Stack.push(std::fmod(a, b));
      }
    }
    if (find_function(postfix[i])) {
      double res = 0;
      if (postfix[i] == 's') {
        res = std::sin(Stack.top());
      } else if (postfix[i] == 'c') {
        res = std::cos(Stack.top());
      } else if (postfix[i] == 't') {
        res = std::tan(Stack.top());
      } else if (postfix[i] == 'd') {
        res = std::atan(Stack.top());
      } else if (postfix[i] == 'b') {
        res = std::acos(Stack.top());
      } else if (postfix[i] == 'a') {
        res = std::asin(Stack.top());
      } else if (postfix[i] == 'l') {
        res = std::log10(Stack.top());
      } else if (postfix[i] == 'n') {
        res = std::log(Stack.top());
      } else if (postfix[i] == 'e') {
        res = std::sqrt(Stack.top());
      }
      Stack.pop();
      Stack.push(res);
    }
    i++;
  }

  *result = Stack.top();

  Stack.pop();
  return 0;
}

void Model::set_x(double num) { x_ = num; }

double Model::get_result() {
  std::string postfix = get_postfix();
  calculate_result(&x_, &result_, postfix);
  return result_;
}

// check input

bool Model::isOperator(char c) {
  return (c == '*' || c == '/' || c == '^' || c == '%');
}

bool Model::isUnaryOperator(char c) { return (c == '+' || c == '-'); }

bool Model::isFunction(const std::string& str) {
  return (str == "cos" || str == "sin" || str == "tan" || str == "acos" ||
          str == "asin" || str == "atan" || str == "sqrt" || str == "ln" ||
          str == "log" || str == "x");
}

bool Model::isCorrectBrackets(int i, int len, const std::string& str) {
  bool result = true;
  if (i > 0 && i < len) {
    if (str[i] == '(') {
      if (std::isdigit(str[i - 1])) {
        result = false;
      }
    }
    if (str[i] == ')') {
      if (std::isdigit(str[i + 1])) {
        result = false;
      }
    }
  }
  return result;
}

bool Model::isValidExpression(const std::string& expression) {
  int length = expression.length();
  int parenthesesCount = 0;
  bool result = true;

  for (int i = 0; i < length && result; i++) {
    char c = expression[i];
    if (c == '.') {
      if (expression[i + 1] == '.') {
        result = false;
        break;
      }
    }
    if (c == '(') {
      result = isCorrectBrackets(i, length, expression);
      if (expression[i + 1] == ')') {
        result = false;
        break;
      }
      parenthesesCount++;
    } else if (c == ')') {
      result = isCorrectBrackets(i, length, expression);
      parenthesesCount--;
      if (parenthesesCount < 0) {
        result = false;  // Неправильное количество закрывающих скобок
        break;
      }
    } else if (isOperator(c)) {
      if (i == 0 || i == length - 1 || expression[i - 1] == '(' ||
          expression[i + 1] == ')' || isOperator(expression[i + 1])) {
        result = false;  // Оператор не может быть в начале, в конце или после
        break;  // открывающей скобки, или перед закрывающей скобкой
      }
    } else if (isUnaryOperator(c)) {
      if (i == length - 1 || expression[i + 1] == ')' ||
          isUnaryOperator(expression[i + 1])) {
        result =
            false;  // Унарный оператор не может быть перед закрывающей скобкой
        break;
      }
    } else if (std::isalpha(c)) {
      int j = i;
      while (j < length && std::isalpha(expression[j])) {
        j++;
      }
      std::string function = expression.substr(i, j - i);
      if (!isFunction(function)) {
        result = false;  // Неизвестная функция
        break;
      } else if (isFunction(function) &&
                 function.find("x") == std::string::npos) {
        if (expression[i + function.length()] != '(') {
          result = false;
          break;
        }
      }
      i = j - 1;
    }
  }

  if (parenthesesCount != 0) {
    result = false;  // Неправильное количество открывающих и закрывающих скобок
  }
  return result;
}

std::string Model::get_result_str() {
  if (isValidExpression(infix_)) {
    std::string result_str = std::to_string(get_result());
    std::string sub = ".000000";
    size_t found = result_str.find(sub);
    if (found != std::string::npos) {
      // подстрока найдена, удаляем ее
      result_str.erase(found, sub.length());
    }
    return result_str;
  }
  return "Value Error";
}

}  // namespace s21