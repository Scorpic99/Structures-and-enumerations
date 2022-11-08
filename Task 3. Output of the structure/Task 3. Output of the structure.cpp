#include <iostream>

struct Address
{
    std::string m_city;
    std::string m_street;
    int m_homeNum;
    int m_flatNum;
    int m_index;
};

void Func(const Address &s) {
    std::cout << "Город: " << s.m_city << std::endl
              << "Улица: " << s.m_street << std::endl
              << "Номер дома: " << s.m_homeNum << std::endl
              << "Номер квартиры: " << s.m_flatNum << std::endl
              << "Индекс: " << s.m_index << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    Address address{"Санкт-Петербург", "пр. Невский", 30, 4, 126344 };
    Address address2{ "Воронеж", "Кирова", 7, 120, 345645 };
    Func(address);
    std::cout << std::endl;
    Func(address2);
    return 0;
}
