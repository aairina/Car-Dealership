#pragma once
//un atribut cu lista de masini si altul cu lista de favorite
#include "..\Repository\carrepository.h"
#include <memory>
#include <utility>

using namespace el_car_domain;
using namespace car_repo;

namespace car_controller {
    class CarController {
        friend class CarUI;

    private:

    public:
        CarController(shared_ptr<CarRepository> car_repo, shared_ptr<CarRepository> fav) {
            repo = std::move(car_repo);
            favourites = std::move(fav);
        }

        vector<ElectricCar> search_by_model(const string &name);

        vector<ElectricCar> search_by_manufacturer(const string &name);

        vector<ElectricCar> filter_by_kilometers(int km);

        vector<ElectricCar> sort_by_price();

        vector<ElectricCar> filter_by_age(int age);

        inline vector<ElectricCar> get_el_car_list() {
            return repo->get_el_car_list();
        }

        inline void add_el_car(const ElectricCar &car) {
            repo->add_el_car(car);
        }

        inline bool remove_el_car(int id) {
            return repo->remove_el_car(id);
        }

        inline bool modify_manufacturer(int id, const string &new_manufacturer) {
            return repo->modify_manufacturer(id, new_manufacturer);
        }

        inline bool modify_model(int id,
                                 const string &new_model) {
            return repo->modify_model(id,  new_model);
        }

        inline bool modify_year_of_registration(int id, int new_year) {
            return repo->modify_year_of_registration(id, new_year);
        }

        inline bool modify_kilometers(int id, int new_km) {
            return repo->modify_kilometers(id, new_km);
        }

        inline bool modify_price(int id,
                                 int new_price) { return repo->modify_price(id, new_price); }

        inline bool modify_load_time(int id, int new_load_time) {
            return repo->modify_load_time(id, new_load_time);
        }

        inline bool modify_range(int id,
                                 int new_range) { return repo->modify_range(id, new_range); }

        shared_ptr<CarRepository> repo;

        shared_ptr<CarRepository> favourites;
    };
}




