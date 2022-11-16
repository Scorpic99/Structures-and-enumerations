#include <iostream>
#include <string>
#include "Task 2. Scores.h"


struct Score {
    int m_numScore = 0;
    std::string m_name;
    double m_money = 0;
};

void balance(Score &score) {
    std::cin >> score.m_money;
}

void balanceAdd(Score &score, double add) {
     score.m_money += add;
}

int main()
{

    setlocale(LC_ALL, "Russian");
    Score s;
    std::cout << "Введите номер счета: ";
    std::cin >> s.m_numScore; 
    std::cout << "Введите имя владельца: ";
    std::cin >> s.m_name;
    std::cout << "Введите баланс: ";
    std::cin >> s.m_money;
    std::cout << "Введите новую сумму: ";
    balance(s);
    std::cout << "Ваш счет: " << s.m_name << ", " << s.m_numScore << ", " << s.m_money << std::endl;

    std::string enter = " ";
    std::cout << std::endl;
    do {
        
		std::cout << "Если хотите снять деньги с карты введите y, " << std::endl <<
                      "Если хотите внести деньги на карту введите p, " << std::endl <<
                       "Если хотите посмотреть ваш баланс введите s, " << std::endl <<
                        "Что бы выйти с режима оппераций введите n " << std::endl;
		std::cin >> enter;
		double addMoney = 0, getMoney = 0;
        if (enter == "y") {
            std::cout << "\x1B[31mКакую сумму снять? \033[0m";
            std::cin >> getMoney;
            if (s.m_money - getMoney > 0) {
                s.m_money -= getMoney;
            }
            else {
                std::cout << "\x1B[31mВы не можете снять больше чем у вас на карте!\033[0m" << std::endl;
            }
        }
        else if (enter == "p") {
            std::cout << "\x1B[31mКакую сумму внести? \033[0m";
            std::cin >> addMoney;
            balanceAdd(s, addMoney);
        }
        else if (enter == "s") {

            std::cout << "\x1B[31m" << "Ваш счет: " << s.m_name << ", " << s.m_numScore << ", " << s.m_money << "\033[0m" << std::endl;
        }
        else {
            if (enter != "n") {
                std::cout << "\x1B[31mВы ввели не правельную комманду! Вводить можно только один символ с английской раскладкой и с маленьким регистром\033[0m" << std::endl;
            }
        }
    } while (enter != "n");

    return 0;

}
/*char enter = ' ';
if (enter == "y") {
    std::cout << "\x1B[31mКакую сумму снять? \033[0m";
    std::cin >> getMoney;
    if (s.m_money - getMoney > 0) {
        s.m_money -= getMoney;
    }
    else {
        std::cout << "\x1B[31mВы не можете снять больше чем у вас на карте!\033[0m" << std::endl;
    }
}
else if (enter == "p") {
    std::cout << "\x1B[31mКакую сумму внести? \033[0m";
    std::cin >> addMoney;
    balanceAdd(s, addMoney);
}
else if (enter == "s") {

    std::cout << "\x1B[31m" << "Ваш счет: " << s.m_name << ", " << s.m_numScore << ", " << s.m_money << "\033[0m" << std::endl;
}
else {
    if (enter != "n") {
        std::cout << "\x1B[31mВы ввели не правельную комманду! Вводить можно только один символ с английской раскладкой и с маленьким регистром\033[0m" << std::endl;
    }
}
    } while (enter != "n");*/
/*
do {

    std::cout << "Если хотите снять деньги с карты введите y, " << std::endl <<
        "Если хотите внести деньги на карту введите p, " << std::endl <<
        "Если хотите посмотреть ваш баланс введите s, " << std::endl <<
        "Что бы выйти с режима оппераций введите n " << std::endl;
    std::cin >> enter;
    double addMoney = 0, getMoney = 0;
    switch (enter) {
    case 'y':
        std::cout << "\x1B[31mКакую сумму снять? \033[0m";
        std::cin >> getMoney;
        if (s.m_money - getMoney >= 0) {
            s.m_money -= getMoney;
        }
        else {
            std::cout << "\x1B[31mВы не можете снять больше чем у вас на карте!\033[0m" << std::endl;
        }
        break;
    case 'p':
        std::cout << "\x1B[31mКакую сумму внести? \033[0m";
        std::cin >> addMoney;
        balanceAdd(s, addMoney);
        break;
    case 's':
        std::cout << "\x1B[31m" << "Ваш счет: " << s.m_name << ", " << s.m_numScore << ", " << s.m_money << "\033[0m" << std::endl;
        break;
    default:
        if (enter != 'n') {
            std::cout << "\x1B[31mВы ввели не правельную комманду! Вводить можно только один символ с английской раскладкой и с маленьким регистром\033[0m" << std::endl;
        }
        break;

    }
} while (enter != 'n');
*/