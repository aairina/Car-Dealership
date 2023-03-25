//
// Created by OOmPa lOOmPa on 23-Apr-22.
//

#include "carcontroller.h"
#include "..\UI\carui.h"
#include <iostream>
#include <algorithm>

bool ascending_price(const ElectricCar &car1, const ElectricCar &car2) {
    return car1.get_price() <= car2.get_price();
}

vector<ElectricCar> car_controller::CarController::sort_by_price() {
    vector<ElectricCar> copy = repo->get_el_car_list();
    std::sort(copy.begin(), copy.end(), ascending_price);
    return copy;
}

vector<ElectricCar> car_controller::CarController::filter_by_kilometers(int km) {
    vector<ElectricCar> result = {};
    vector<ElectricCar> product_list = repo->get_el_car_list();
    std::copy_if(begin(product_list), end(product_list), std::back_inserter(result),
                 [&km](ElectricCar &car) { return car.get_kilometers() < km; });
    return result;
}

vector<ElectricCar> car_controller::CarController::filter_by_age(int age) {
    vector<ElectricCar> result = {};
    vector<ElectricCar> product_list = repo->get_el_car_list();
    std::copy_if(begin(product_list), end(product_list), std::back_inserter(result),
                 [&age](ElectricCar &car) { return car.get_year_of_registration() >= 2022 - age; });
    return result;
}


vector<ElectricCar> car_controller::CarController::search_by_model(const string &name_part) {
    vector<ElectricCar> result = {};
    vector<ElectricCar> product_list = repo->get_el_car_list();
    std::copy_if(begin(product_list), end(product_list), std::back_inserter(result),
                 [&name_part](ElectricCar &car) {
                     return car.get_model().find(name_part) != std::string::npos;
                 });
    return result;
}


vector<ElectricCar> car_controller::CarController::search_by_manufacturer(const string &name_part) {
    vector<ElectricCar> result = {};
    vector<ElectricCar> product_list = repo->get_el_car_list();
    std::copy_if(begin(product_list), end(product_list), std::back_inserter(result),
                 [&name_part](ElectricCar &car) {
                     return car.get_manufacturer().find(name_part) != std::string::npos;
                 });
    return result;
}

