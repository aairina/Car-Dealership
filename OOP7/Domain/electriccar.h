//
// Created by OOmPa lOOmPa on 23-Apr-22.
//

#pragma once

#include <string>
#include <utility>

using namespace std;

namespace el_car_domain {
    class ElectricCar {
    private:
        string m_model;
        string m_manufacturer;
        int id{};
        int m_year_of_registration{};
        int m_kilometers{};
        int m_price{};
        int m_loading_time{};
        int m_range{};

    public:
        static int count;

        ElectricCar();

        ElectricCar(string model, string manufacturer, int y_o_r, int km, int price, int load, int range);

        inline int get_id() const { return id; }

        inline void set_id(int id) { this->id = id; }

        inline string get_model() const {
            return m_model;
        }

        inline void set_model(string model) {
            m_model = std::move(model);
        }


        inline string get_manufacturer() const {
            return m_manufacturer;
        }

        inline void set_manufacturer(string manufacturer) {
            m_manufacturer = std::move(manufacturer);
        }

        inline int get_year_of_registration() const {
            return m_year_of_registration;
        }

        void set_year_of_registration(int year_of_registration);

        inline int get_kilometers() const {
            return m_kilometers;
        }

        void set_kilometers(int kilometers);

        inline int get_price() const {
            return m_price;
        }

        void set_price(int price);

        inline int get_loading_time() const {
            return m_loading_time;
        }

        void set_loading_time(int loading_time);

        inline int get_range() const {
            return m_range;
        }

        void set_range(int range);
    };
}
