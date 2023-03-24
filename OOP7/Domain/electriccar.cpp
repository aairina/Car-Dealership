#include "electriccar.h"
#include <exception>
#include <iostream>

using namespace std;
using namespace el_car_domain;
int ElectricCar::count = 0;

ElectricCar::ElectricCar() { count++; id = count; }

ElectricCar::ElectricCar(string model, string manufacturer, int y_o_r, int km, int price, int load, int range) {
    ElectricCar::count++;
    id = ElectricCar::count;
    m_model = std::move(model);
    m_manufacturer = std::move(manufacturer);
    m_year_of_registration = y_o_r;
    m_kilometers = km;
    m_price = price;
    m_loading_time = load;
    m_range = range;
}

void ElectricCar::set_year_of_registration(int year_of_registration) {
    if (year_of_registration < 1886) {
        throw exception();
    }
    m_year_of_registration = year_of_registration;
}

void ElectricCar::set_kilometers(int kilometers) {
    if (kilometers < 0) {
        throw exception();
    }
    m_kilometers = kilometers;
}

void ElectricCar::set_price(int price) {
    if (price < 0) {
        throw exception();
    }
    m_price = price;
}

void ElectricCar::set_loading_time(int loading_time) {
    if (loading_time < 0) {
        throw exception();
    }
    m_loading_time = loading_time;
}

void ElectricCar::set_range(int range) {
    if (range < 0) {
        throw exception();
    }
    m_range = range;
}
