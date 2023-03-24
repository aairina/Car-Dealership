//
// Created by OOmPa lOOmPa on 23-Apr-22.
//

#include "carrepository.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
using namespace car_repo;

//int CarRepository::search_el_car(const string &car_manufacturer, const string &car_model) {
//    int index = -1;
//    for (int i = 0; i < el_car_list.size() && index < 0; i++) {
//        if (el_car_list[i].get_manufacturer() == car_manufacturer &&
//            el_car_list[i].get_model() == car_model) { index = i; }
//    }
//    return index;
//}


int CarRepository::search_el_car(int car_id) {
    int index = -1;
    index = find_if(el_car_list.begin(), el_car_list.end(),
                    [&car_id](ElectricCar &car) { return car.get_id() == car_id; }) - el_car_list.begin();
    return index;
}

void InMemRepo::add_el_car(const ElectricCar &car) {
    el_car_list.emplace_back(car);
}

bool InMemRepo::remove_el_car(int car_id) {
    int index_to_delete = search_el_car(car_id);
    if (index_to_delete == el_car_list.size()) { return false; }
    el_car_list.erase(el_car_list.begin() + index_to_delete);
    return true;
}

bool InMemRepo::modify_manufacturer(const int ID, const string &new_manufacturer) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_manufacturer(new_manufacturer);
    return true;
}

bool InMemRepo::modify_model(const int ID, const string &new_model) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_model(new_model);
    return true;
}

bool InMemRepo::modify_year_of_registration(const int ID, int new_year) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_year_of_registration(new_year);
    return true;
}

bool InMemRepo::modify_kilometers(const int ID, int new_km) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_kilometers(new_km);
    return true;
}

bool InMemRepo::modify_price(const int ID, int new_price) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_price(new_price);
    return true;
}

bool InMemRepo::modify_load_time(const int ID, int new_load_time) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_loading_time(new_load_time);
    return true;
}

bool InMemRepo::modify_range(const int ID, int new_range) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_range(new_range);
    return true;
}
//vector<string> split(string text, char delim) {
//    string line;
//    vector<string> vec;
//    ifstream in("RepoFile.csv");
//    while(getline( delim)) {
//        vec.push_back(line);
//    }
//    return vec;
//}

void InFileRepo::add_el_car(const ElectricCar &car) {
    el_car_list.emplace_back(car);
    car_to_file(car);
}

void InFileRepo::rewrite() {
    ofstream fout;
    fout.open(file, ofstream::trunc);
    for (int i = 0; i < el_car_list.size(); i++)
        car_to_file(el_car_list[i]);
    fout.close();
}

bool InFileRepo::modify_manufacturer(const int ID, const string &new_manufacturer) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_manufacturer(new_manufacturer);

    rewrite();
    return true;
}

bool InFileRepo::modify_model(const int ID, const string &new_model) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_model(new_model);

    rewrite();
    return true;
}

bool InFileRepo::modify_year_of_registration(const int ID, int new_year) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_year_of_registration(new_year);

    rewrite();
    return true;
}

bool InFileRepo::modify_kilometers(const int ID, int new_km) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_kilometers(new_km);

    rewrite();
    return true;
}

bool InFileRepo::modify_price(const int ID, int new_price) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_price(new_price);

    rewrite();
    return true;
}

bool InFileRepo::modify_load_time(const int ID, int new_load_time) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_loading_time(new_load_time);

    rewrite();
    return true;
}

bool InFileRepo::modify_range(const int ID, int new_range) {
    int index;
    try {
        index = search_el_car(ID);
    }
    catch (exception &) {
        cout << "Car not found" << endl;
        return false;
    }
    el_car_list[index].set_range(new_range);

    rewrite();
    return true;
}

void InFileRepo::car_to_file(const ElectricCar &car) {
    ofstream fout(file, ofstream::app);
    //ID,Modell,Marke,Erstzulassungsjahr,Kilometer,Preis,Ladezeit,Reichweite
    fout << car.get_id() << ',' << car.get_manufacturer() << ',' << car.get_model() << ','
         << car.get_year_of_registration() << ',' <<
         car.get_kilometers() << ',' << car.get_price() << ',' << car.get_loading_time() << ',' << car.get_range()
         << '\n';
}

bool InFileRepo::remove_el_car(const int ID) {

    int index_to_delete = search_el_car(ID);
    if (index_to_delete < 0) { return false; }
    el_car_list.erase(el_car_list.begin() + index_to_delete);

    rewrite();
    return true;
}

void InFileRepo::initialize() {
    ifstream fin(file);
    string manufacturer, model;
    string id, year, km, price, loadTime, range;
    int iId, iYear, iKm, iPrice, iLoadTime, iRange;
    int maxId = -1;
    while (getline(fin, id, ',')) {
        iId = stoi(id);
        if (iId > maxId) {
            maxId = iId;
        }
        getline(fin, manufacturer, ',');
        getline(fin, model, ',');
        getline(fin, year, ',');
        iYear = stoi(year);
        getline(fin, km, ',');
        iKm = stoi(km);
        getline(fin, price, ',');
        iPrice = stoi(price);
        getline(fin, loadTime, ',');
        iLoadTime = stoi(loadTime);
        getline(fin, range, '\n');
        iRange = stoi(range);
        ElectricCar car(model, manufacturer, iYear, iKm, iPrice, iLoadTime, iRange);
        car.set_id(iId);
        el_car_list.push_back(car);
    }
    ElectricCar::count = maxId;
    fin.close();
}
