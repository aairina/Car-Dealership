//
// Created by OOmPa lOOmPa on 23-Apr-22.
//

#pragma once

#include "..\Domain\electriccar.h"
#include <fstream>
#include <vector>
#include <iostream>

using namespace el_car_domain;

namespace car_repo {
    class CarRepository {
//        friend class CarController;
//
//        friend class CarUI;


    protected:
        vector<ElectricCar> el_car_list;
    public:

        inline vector<ElectricCar> get_el_car_list() {
            return el_car_list;
        }

        virtual void add_el_car(const ElectricCar &car)=0;

        virtual bool remove_el_car(int id)=0;

        virtual bool modify_manufacturer(int id, const string &new_manufacturer)=0;

        virtual bool modify_model(int id, const string &new_model)=0;

        virtual bool modify_year_of_registration(int id, int new_year)=0;

        virtual bool modify_kilometers(int id, int new_km) = 0;

        virtual bool modify_price(int id, int new_price)=0;

        virtual bool modify_load_time(int id, int new_load_time)=0;

        virtual bool modify_range(int id, int new_range)=0;

        virtual void initialize() = 0;

        int search_el_car(int car_id);
    };

    class InMemRepo : public CarRepository {
    public:
        void add_el_car(const ElectricCar &car);

        bool remove_el_car(const int ID);

        bool modify_manufacturer(const int ID, const string &new_manufacturer);

        bool modify_model(const int ID, const string &new_model);

        bool modify_year_of_registration(const int ID, int new_year);

        bool modify_kilometers(const int ID, int new_km);

        bool modify_price(const int ID, int new_price);

        bool modify_load_time(const int ID, int new_load_time);

        bool modify_range(const int ID, int new_range);

        void initialize() {};
    };

    class InFileRepo : public CarRepository {
    private:
        string file;
    public:
        InFileRepo(string f):CarRepository() {
            file = f;
        }

        void car_to_file(const ElectricCar &car);

        void rewrite();

        void add_el_car(const ElectricCar &car);

        bool remove_el_car(const int ID);

        bool modify_manufacturer(const int ID, const string &new_manufacturer);

        bool modify_model(const int ID, const string &new_model);

        bool modify_year_of_registration(const int ID, int new_year);

        bool modify_kilometers(const int ID, int new_km);

        bool modify_price(const int ID, int new_price);

        bool modify_load_time(const int ID, int new_load_time);

        bool modify_range(const int ID, int new_range);

        void initialize();
    };


}

