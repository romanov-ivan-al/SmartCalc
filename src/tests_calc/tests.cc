#include <gtest/gtest.h>

#include "../model/model.h"

TEST(ConversionTest, InfixToPostfix) {
  std::string infix = "156+2*3";
  std::string expected_postfix = "156 2 3 * + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();

  //   parser_input(infix, postfix);
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix1) {
  std::string infix = "2^3+x";
  std::string expected_postfix = "2 3 ^ x + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();

  //   parser_input(infix, postfix);
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix2) {
  std::string infix = "7*4^8";
  std::string expected_postfix = "7 4 8 ^ * ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix3) {
  std::string infix = "7*4^8+(3^3*6)";
  std::string expected_postfix = "7 4 8 ^ * 3 3 ^ 6 * + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix4) {
  std::string infix = "1-2/3+4";
  std::string expected_postfix = "1 2 3 / - 4 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix5) {
  std::string infix = "2+3-4*x";
  std::string expected_postfix = "2 3 + 4 x * - ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix6) {
  std::string infix = "2.09+((-3)-4.654567)+1";
  std::string expected_postfix = "2.09 3 - 4.654567 - + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix7) {
  std::string infix = "2.09+sin(3)+1";
  std::string expected_postfix = "2.09 3 s + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix8) {
  std::string infix = "2.09+cos(3)+1";
  std::string expected_postfix = "2.09 3 c + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix9) {
  std::string infix = "2.09+tan(3)+1";
  std::string expected_postfix = "2.09 3 t + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix10) {
  std::string infix = "2.09+log(3)+1";
  std::string expected_postfix = "2.09 3 l + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix11) {
  std::string infix = "2.09+asin(3)+1";
  std::string expected_postfix = "2.09 3 a + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix12) {
  std::string infix = "2.09+acos(3)+1";
  std::string expected_postfix = "2.09 3 b + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix13) {
  std::string infix = "2.09+atan(3)+1";
  std::string expected_postfix = "2.09 3 d + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix14) {
  std::string infix = "2.09+sqrt(3)+1";
  std::string expected_postfix = "2.09 3 e + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix15) {
  std::string infix = "2.09+ln(3)+1";
  std::string expected_postfix = "2.09 3 n + 1 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix16) {
  std::string infix = "sin(2+4)+ln(3)+1*7+cos(5)";
  std::string expected_postfix = "2 4 + s 3 n + 1 7 * + 5 c + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix17) {
  std::string infix = "acos(4)*tan(5)-1";
  std::string expected_postfix = "4 b 5 t * 1 - ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix18) {
  std::string infix = "1+ (acos(4) * tan(5) - 1) / 7";
  std::string expected_postfix = "1 4 b 5 t * 1 - 7 / + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix19) {
  std::string infix = "(log(4)+ln(x))/sqrt(9)";
  std::string expected_postfix = "4 l x n + 9 e / ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix20) {
  std::string infix = "asin(5) * acos(2) / atan(10.9)";
  std::string expected_postfix = "5 a 2 b * 10.9 d / ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix21) {
  std::string infix = "sin(cos(sin(cos(sqrt(3.1415)))))";
  std::string expected_postfix = "3.1415 e c s c s ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix22) {
  std::string infix = "5%3";
  std::string expected_postfix = "5 3 % ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix23) {
  std::string infix = "-3+2";
  std::string expected_postfix = "3 - 2 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix24) {
  std::string infix = "-(3+2)";
  std::string expected_postfix = "3 2 + - ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix25) {
  std::string infix = "+5";
  std::string expected_postfix = "5 + ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

TEST(ConversionTest, InfixToPostfix26) {
  std::string infix = "sin(x)%5/ 4 -7";
  std::string expected_postfix = "x s 5 % 4 / 7 - ";
  s21::Model m = s21::Model();
  m.set_infix(infix);
  std::string postfix = m.get_postfix();
  EXPECT_EQ(expected_postfix, postfix);
}

// Calculate
TEST(CalculateTest, Calculate1) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("2+3-1");
  result = m.get_result();
  EXPECT_EQ(result, 4.0);
}

TEST(CalculateTest, Calculate2) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("5*5");
  result = m.get_result();
  EXPECT_EQ(result, 25);
}

TEST(CalculateTest, Calculate3) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("9/3");
  result = m.get_result();
  EXPECT_EQ(result, 3);
}

TEST(CalculateTest, Calculate4) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("2^3");
  result = m.get_result();
  EXPECT_EQ(result, 8);
}

TEST(CalculateTest, Calculate5) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("9%2");
  result = m.get_result();
  EXPECT_EQ(result, 1);
}

TEST(CalculateTest, Calculate6) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("2+sin(1)");
  result = m.get_result();
  EXPECT_NEAR(2.84147, result, 0.001);
}

TEST(CalculateTest, Calculate7) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("4-cos(15)+7");
  result = m.get_result();
  // std:: cout << result << std::endl;
  EXPECT_NEAR(11.75968, result, 0.001);
}

TEST(CalculateTest, Calculate8) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("5 - tan(3)");
  result = m.get_result();
  // std:: cout << result << std::endl;
  EXPECT_NEAR(5.142546, result, 0.001);
}

TEST(CalculateTest, Calculate9) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("atan(6)");
  result = m.get_result();

  EXPECT_NEAR(1.40565, result, 0.001);
}

TEST(CalculateTest, Calculate10) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("acos(-1) ");
  result = m.get_result();

  EXPECT_NEAR(3.14159, result, 0.001);
}

TEST(CalculateTest, Calculate11) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("asin(-1) ");
  result = m.get_result();

  EXPECT_NEAR(-1.5708, result, 0.001);
}

TEST(CalculateTest, Calculate12) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("log(26)");
  result = m.get_result();
  EXPECT_NEAR(1.414973, result, 0.001);
}

TEST(CalculateTest, Calculate13) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("sqrt(26) ");
  result = m.get_result();
  EXPECT_NEAR(5.099020, result, 0.001);
}

TEST(CalculateTest, Calculate14) {
  double result = 0;
  s21::Model m = s21::Model();
  m.set_infix("5 + x");
  m.set_x(5);
  result = m.get_result();
  EXPECT_NEAR(10, result, 0.001);
}

TEST(isValidExpressionTest, isValidExpression1) {
  std::string func = "sin(6)+24";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression2) {
  std::string func = "cos(x)+sin(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression3) {
  std::string func = "tan(x)-acos(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression4) {
  std::string func = "sqrt(x) * ln(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression5) {
  std::string func = "log(x)/asin(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression6) {
  std::string func = "atan(x) ^ 2";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression7) {
  std::string func = "cos(x) + sin(x) * tan(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression8) {
  std::string func = "sqrt(x) * ln(x) - acos(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression9) {
  std::string func = "log(x) / asin(x) + atan(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression10) {
  std::string func = "cos(x) + sin(x) * tan(x) - sqrt(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression11) {
  std::string func = "sqrt(x) * ln(x) - acos(x) / log(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression12) {
  std::string func = "cos(x) + sin(x + tan(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression13) {
  std::string func = "tan(x - acos(x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression14) {
  std::string func = "sqrt(x) * ln x";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression15) {
  std::string func = "log(x / asin x)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression16) {
  std::string func = "atan x ^ 2";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression17) {
  std::string func = "cos x + sin x * tan x";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression18) {
  std::string func = "sqrt x * ln x - acos x";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression19) {
  std::string func = "log x / asin x + atan x";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression20) {
  std::string func = "-1+5";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression21) {
  std::string func = "*1/5";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression22) {
  std::string func = "5+(-1)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression23) {
  std::string func = "10+(5-4-)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression24) {
  std::string func = "10+(5-4*)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression25) {
  std::string func = "10+(5-4))";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression26) {
  std::string func = "10+abcd(5-4))";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression27) {
  std::string func = "1.....5+3";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression28) {
  std::string func = "1.5+3";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression29) {
  std::string func = "1.5+3.0";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 1);
}

TEST(isValidExpressionTest, isValidExpression30) {
  std::string func = "1+()";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression31) {
  std::string func = "25(x-2)";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

TEST(isValidExpressionTest, isValidExpression32) {
  std::string func = "25+(x-2)34-1";
  s21::Model m = s21::Model();
  EXPECT_EQ(m.isValidExpression(func), 0);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}