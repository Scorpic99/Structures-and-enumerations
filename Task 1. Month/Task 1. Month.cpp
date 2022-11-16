#include <iostream>

enum class Month {
    january = 1,
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
        Month mon;
        std::cout << "Введите номер месяца: ";
        std::cin >> numMonth;
        mon = static_cast<Month>(numMonth);
        //std::cin >> mon;
        
        switch(mon) {
            case static_cast<Month>(0):
                std::cout << "До свидания";
                break;
            case Month::january: 
                std::cout << "Январь";
                break;
            case Month::february:
                std::cout << "Февраль";
                //mon = Month::february;
                break;
            case Month::march:
                std::cout << "Март";
                //mon = Month::march;
                break;
            case Month::april:
                std::cout << "Апрель";
                //mon = Month::april;
                break;
            case Month::may:
                std::cout << "Май";
                //mon = Month::may;
                break;
            case Month::june:
                std::cout << "Июнь";
                //mon = Month::june;
                break;
            case Month::july:
                std::cout << "Июль";
                //mon = Month::july;
                break;
            case Month::august:
                std::cout << "Август";
                //mon = Month::august;
                break;
            case Month::september:
                std::cout << "Сентябрь";
                //mon = Month::september;
                break;
            case Month::october:
                std::cout << "Октябрь";
                //mon = Month::october;
                break;
            case Month::november:
                std::cout << "Ноябрь";
                //mon = Month::november;
                break;
            case Month::december:
                std::cout << "Декабрь";
                //mon = Month::december;
                break;
            default:
                std::cout << "Неправельный номер";
                break;
        }
        std::cout << std::endl;
    } while (numMonth != 0);


}