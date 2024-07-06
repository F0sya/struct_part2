#include <iostream>

using namespace std;

struct Boiler {
public:
    char brand[20];
    char color[15];
    double power;
    double volume;
    double temperature;
};

int main() {
    Boiler boiler;
    strcpy_s(boiler.brand, "TIKI ");
    strcpy_s(boiler.color, "White");
    boiler.power = 2000;
    boiler.volume = 50;
    boiler.temperature = 65;

    cout << "Brand: " << boiler.brand << endl;
    cout << "Color: " << boiler.color << endl;
    cout << "Power: " << boiler.power << " W" << endl;
    cout << "Volume: " << boiler.volume << " L" << endl;
    cout << "Temperature: " << boiler.temperature << " C" << endl;


    int choice;
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Color" << endl;
        cout << "3 - Power" << endl;
        cout << "4 - Volume" << endl;
        cout << "5 - Temperature" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin >> boiler.brand;
            break;
        case 2:
            cout << "Enter new color: ";
            cin >> boiler.color;
            break;
        case 3:
            cout << "Enter new power: ";
            cin >> boiler.power;
            break;
        case 4:
            cout << "Enter new volume (L): ";
            cin >> boiler.volume;
            break;
        case 5:
            cout << "Enter new temperature (C): ";
            cin >> boiler.temperature;
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
            break;
        }

        cout << "\nUpdated Boiler Machine Details:" << endl;
        cout << "Brand: " << boiler.brand << endl;
        cout << "Color: " << boiler.color << endl;
        cout << "Power: " << boiler.power << " W" << endl;
        cout << "Volume: " << boiler.volume << " L" << endl;
        cout << "Temperature: " << boiler.temperature << " C" << endl;
    }

    return 0;
}