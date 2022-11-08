#include <iostream>

enum class Month {
    january,
    february,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

int main()
{
    setlocale(LC_ALL, "Rus");
    int numMonth;
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> numMonth;
        Month mon = static_cast<Month>(numMonth);
        switch(static_cast<int>(mon)) {
            case 0:
                std::cout << "До свидания";
                break;
            case 1: 
                std::cout << "Январь";
                break;
            case 2:
                std::cout << "Февраль";
                break;
            case 3:
                std::cout << "Март";
                break;
            case 4:
                std::cout << "Апрель";
                break;
            case 5:
                std::cout << "Май";
                break;
            case 6:
                std::cout << "Июнь";
                break;
            case 7:
                std::cout << "Июль";
                break;
            case 8:
                std::cout << "Август";
                break;
            case 9:
                std::cout << "Сентябрь";
                break;
            case 10:
                std::cout << "Октябрь";
                break;
            case 11:
                std::cout << "Ноябрь";
                break;
            case 12:
                std::cout << "Декабрь";
                break;
            default:
                std::cout << "Неправельный номер";
                break;
        }
        std::cout << std::endl;
    } while (numMonth != 0);

}