//
// Created by OOmPa lOOmPa on 23-Apr-22.
//
#include "..\Controller\carcontroller.h"
#include <iostream>

#include "carui.h"

using namespace car_controller;
using namespace el_car_domain;
using namespace car_repo;
using namespace car_ui;

void ManagerUI::message_manager_menu() {
    cout << "\nMAIN MENU\nOptions:\n" <<
         "0. Exit\n" <<
         "1. Add electric car\n" <<
         "2. Delete electric car\n" <<
         "3. Modify electric car details\n" <<
         "4. Find electric cars by (part of) manufacturer (brand) name\n" <<
         "5. Find electric cars by (part of) model\n" <<
         "6. Show electric cars under certain mileage\n" <<
         "7. Show electric cars under certain age\n" <<
         "8. Show electric cars in ascending order of price\n";
    cout << "Type in option number: ";

}

void ManagerUI::message_modify_car() {
    cout << "\nMODIFY CAR DETAILS\nOptions:\n" <<
         "0. Exit\n" <<
         "1. Modify model\n" <<
         "2. Modify manufacturer\n" <<
         "3. Modify year of registration\n" <<
         "4. Modify kilometers\n" <<
         "5. Modify price\n" <<
         "6. Modify loading time\n" <<
         "7. Modify range\n";
    cout << "Type in option number: ";
}

void ManagerUI::modify_menu(int choice) {
    if (choice == 0)
        return;
    if (choice == 1) {
        string newmodel;
        int id;
        cout << "ID:\n";
        cin >> id;
        cout << "New Model\n";
        cin >> newmodel;
        controller->repo->modify_model(id, newmodel);
        return;
    }
    if (choice == 2) {
        string newmodel;
        int id;
        cout << "ID:\n";
        cin >> id;
        cout << "New Manufacturer\n";
        cin >> newmodel;
        controller->repo->modify_manufacturer(id, newmodel);
        return;
    }
    if (choice == 3) {
        string man, model;
        int newyear;
        int id;
        cout << "ID:\n";
        cin >> id;
        cout << "New Year\n";
        cin >> newyear;
        try {
            controller->repo->modify_year_of_registration(id, newyear);
        }
        catch (exception&) {
            cout << "Invalid year\n";
        }
        return;
    }
    if (choice == 4) {
        int km;
        int id;
        cout << "ID:\n";
        cin >> id;
        cout << "New Kilometers\n";
        cin >> km;
        try {
            controller->repo->modify_kilometers(id, km);
        }
        catch (exception&) {
            cout << "Invalid Kilometers\n";
        }
        return;
    }
    if (choice == 5) {
        int newprice;
        int id;
        cout << "ID:\n";
        cin >> id;
        cout << "New Price\n";
        cin >> newprice;
        try {
            controller->repo->modify_price(id, newprice);
        }
        catch (exception&) {
            cout << "Invalid price\n";
        }
        return;
    }
    if (choice == 6) {
        int newtime;
        int id;
        cout << "ID:\n";
        cin >> id;
        cout << "New Loading time\n";
        cin >> newtime;
        try {
            controller->repo->modify_load_time(id, newtime);
        }
        catch (exception&) {
            cout << "Invalid Loading time\n";
        }
        return;
    }
    if (choice == 7) {
        int newrange;
        int id;
        cout << "ID:\n";
        cin >> id;
        cout << "New Range\n";
        cin >> newrange;
        try {
            controller->repo->modify_range(id, newrange);
        }
        catch (exception&) {
            cout << "Invalid Range\n";
        }
        return;
    }
}

void ManagerUI::manager_menu() {
    int input_option = -1, choice;
    bool exit = false;
    vector<ElectricCar> modified_list = {};
    string name_part;
    int number = 0;
    while (!exit) {
        try {
            message_manager_menu();
            cin >> input_option;
            if (input_option < 0 || input_option > 8) { throw exception(); }
        }
        catch (exception &) {
            cout << "Invalid input option\n";
        }
        switch (input_option) {
            case 0:
                exit = true;
                break;
            case 1:
                controller->add_el_car(read_el_car());
                break;
            case 2:
                remove();
                break;
            case 3:
                message_modify_car();
                cin >> choice;
                modify_menu(choice);
                break;
            case 4:
                name_part = read_string();
                print_list(controller->search_by_manufacturer(name_part));
                break;
            case 5:
                name_part = read_string();
                print_list(controller->search_by_model(name_part));
                break;
            case 6:
                number = read_number();
                print_list(controller->filter_by_kilometers(number));
                break;
            case 7:
                number = read_number();
                print_list(controller->filter_by_age(number));
                break;
            case 8:
                print_list(controller->sort_by_price());
                break;
            default:
                cout << "\nDon't know how you got here. I should have caught all exceptions by now...\n";
                break;
        }
    }
}

string car_ui::CarUI::read_string() {
    string string_to_read;
    cin >> string_to_read;
    return string_to_read;
}

int car_ui::CarUI::read_number() {
    int quantity;
    cin >> quantity;
    return quantity;
}

void ManagerUI::remove() {
    int id;
    cout<<"\nCar ID:\n";
    cin>>id;
    controller->repo->remove_el_car(id);
}

bool ClientUI::add_to_fav() {
    int id;
    cout << "Car ID: ";
    cin >> id;
    int index_to_add = controller->repo->search_el_car(id);
    if (index_to_add < 0) { return false; }
    controller->favourites->add_el_car(controller->repo->get_el_car_list()[index_to_add]);
    return true;
}

ElectricCar car_ui::CarUI::read_el_car() {
    cout << "\nREADING CAR DETAILS\n";
    ElectricCar result;
    string prod_detail;
    int number;
    bool good;

    cout << "manufacturer: ";
    cin >> prod_detail;
    result.set_manufacturer(prod_detail);
    cout << "\nElectricCar name set to " << result.get_manufacturer() << '\n';


    cout << "model: ";
    cin >> prod_detail;
    result.set_model(prod_detail);
    cout << "\nElectricCar model set to " << result.get_model() << '\n';

    good = false;
    while (!good) {
        try {
            good = true;
            cout << "year of registration:\n";
            cin >> number;
            result.set_year_of_registration(number);
        } catch (exception &) {
            cout << "\n Year isn't right. Try again\n";
            good = false;
        }
    }
    cout << "\nElectricCar year of registration set to " << result.get_year_of_registration() << '\n';


    good = false;
    while (!good) {
        try {
            good = true;
            //cin set lala
            cout << "kilometers: ";
            cin >> number;
            result.set_kilometers(number);
        } catch (exception &) {
            cout << "\n Number isn't right. Try again\n";
            good = false;
        }
    }
    cout << "\nElectricCar mileage set to " << result.get_kilometers() << '\n';




    good = false;
    while (!good) {
        try {
            good = true;
            cout << "price: ";
            cin >> number;
            result.set_price(number);
            //cin set lala
        } catch (exception &) {
            cout << "\n Price isn't right. Try again\n";
            good = false;
        }
    }
    cout << "\nElectricCar price set to " << result.get_price() << '\n';


    good = false;
    while (!good) {
        try {
            good = true;
            cout << "loading time: ";
            cin >> number;
            result.set_loading_time(number);
            //cin set lala
        } catch (exception &) {
            cout << "\n Number isn't right. Try again\n";
            good = false;
        }
    }
    cout << "\nElectricCar loading time set to " << result.get_loading_time() << '\n';


    good = false;
    while (!good) {
        try {
            good = true;
            cout << "range: ";
            cin >> number;
            result.set_range(number);
        } catch (exception &) {
            cout << "\n Range isn't right. Try again\n";
            good = false;
        }
    }
    cout << "\nElectricCar range set to " << result.get_range() << '\n';

    cout << "FINISHED READING ElectricCar\n";

    return result;
}

void ClientUI::client_menu() {
    int input_option = -1, choice;
    bool exit = false;
    vector<ElectricCar> modified_list = {};
    ElectricCar car;
    string name_part;
    bool added = false;
    int number = 0;
    while (!exit) {
        try {
            message_client_menu();
            cin >> input_option;
            if (input_option < 0 || input_option > 7) { throw exception(); }
        }
        catch (exception &) {
            cout << "Invalid input option\n";
        }
        switch (input_option) {
            case 0:
                exit = true;
                break;
            case 1:
                added = add_to_fav();
                if (added) { cout << "\n Car added to favourites\n"; }
                else { cout << "\nCar not found\n"; }
                break;
            case 2:
                print_list(controller->sort_by_price());
                break;
            case 3:
                number = read_number();
                print_list(controller->filter_by_age(number));
                break;
            case 4:
                name_part = read_string();
                print_list(controller->search_by_manufacturer(name_part));
                break;
            case 5:
                name_part = read_string();
                print_list(controller->search_by_model(name_part));
                break;
            case 6:
                number = read_number();
                print_list(controller->filter_by_kilometers(number));
                break;
            case 7:
                print_list(controller->favourites->get_el_car_list());
                break;
            default:
                cout << "\nDon't know how you got here. I should have caught all exceptions by now...\n";
                break;
        }
    }
}

void ClientUI::message_client_menu() {
    cout << "\nMAIN MENU\nOptions:\n" <<
         "0. Exit\n" <<
         "1. Add electric car to list of favourites\n" <<
         "2. Show electric cars in ascending order of price\n" <<
         "3. Show electric cars under certain age\n" <<
         "4. Find electric cars by (part of) manufacturer (brand) name\n" <<
         "5. Find electric cars by (part of) model\n" <<
         "6. Show electric cars under certain mileage\n" <<
         "7. Show favourites\n";
    cout << "Type in option number: ";

}

void car_ui::CarUI::print_list(const vector<ElectricCar> &list) {
    for (int i = 0; i < list.size(); i++) {
        cout << "\nID: " << list[i].get_id() << ":\n";
        cout << "Name, model: " << list[i].get_manufacturer() << " " << list[i].get_model() << '\n';
        cout << "Year of registration: " << list[i].get_year_of_registration() << '\n';
        cout << "Price: " << list[i].get_price() << '\n';
        cout << "Km: " << list[i].get_kilometers() << '\n';
        cout << "Range: " << list[i].get_range() << '\n';
        cout << "Loading time: " << list[i].get_loading_time() << '\n';
    }
}
