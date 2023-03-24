//
// Created by OOmPa lOOmPa on 23-Apr-22.
//

#pragma once

#include <utility>
#include <memory>

#include "..\Controller\carcontroller.h"
#include "..\Repository\carrepository.h"

using namespace car_repo;
using namespace car_controller;
using namespace el_car_domain;
//class CarUI, derived classes ClientUI and ManagerUI
namespace car_ui {
    class CarUI {
        friend class ManagerUI;
        friend class ClientUI;
        friend class CarController;
    private:
        shared_ptr<CarController> controller;
    public:
        CarUI(shared_ptr<CarController> ctrl) {
            controller = std::move(ctrl);
        }

        void search_name();

        void filter_kilometers();

        void sort_price();

        int read_number();

        static ElectricCar read_el_car();

        string read_string();

        static void print_list(const vector<ElectricCar> &list);
    };

    class ManagerUI: public CarUI  {
        friend class CarController;
    public:
        ManagerUI(shared_ptr<CarController> ctrl) : CarUI(ctrl){};

        void add();

        void remove();

        void edit();

        static void message_manager_menu();

        static void message_modify_car();

        void manager_menu();

        void modify_menu(int choice);
    };

    class ClientUI : public CarUI {
    public:
        ClientUI(shared_ptr<CarController> ctrl) : CarUI(ctrl){};

        bool add_to_fav();

        void show_fav();

        static void message_client_menu();

        void client_menu();
    };

}
