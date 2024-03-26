
FLAGS = -std=c++17 -Wall -Werror -Wextra
CTEST_FLAGS = -lgtest -lgmock -pthread
CC = g++

all: install
	../build/SmartCalc.app/Contents/MacOS/SmartCalc

install: uninstall
	mkdir -p ../build
	qmake6 view/SmartCalc.pro -o ../build/Makefile
	cd ../build; make > /dev/zero 2> /dev/zero
	mkdir -p ~/Applications ; cp -r ../build/SmartCalc.app ~/Applications/SmartCalc.app

uninstall: clean
	rm -rf ../build
	rm -rf ~/Applications/SmartCalc.app



tests: clean
	$(CC) $(FLAGS) ./tests_calc/tests.cc ./model/model.cc -o tests $(CTEST_FLAGS)
	./tests


dvi:
	open dvi.html

dist:
	cd .. && tar -czvf SmartCalc.tar src

gcov_report: clean tests
	@$(CC) -fprofile-arcs -ftest-coverage ./tests_calc/tests.cc ./model/model.cc -o gcov_report $(FLAGS) $(CTEST_FLAGS)
	@./gcov_report 
	@lcov -o coverage.info -c -d .
	@genhtml coverage.info --output-directory report
	@open ./report/index.html
	@rm -rf *.gcno *.gcda *.gcov


clang:
	clang-format -i -style=Google ./model/*.cc ./tests_calc/*.cc ./controller/*.cc ./view/*.cc


clean:
	rm -rf tests build-SmartCalc-Desktop* ../SmartCalc.tar gcov_report *.gcno *.gcda *.gcov *.info ./report

git: clean
	git add .
	git commit add
	git push origin develop