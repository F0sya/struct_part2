#include <iostream>

using namespace std;

struct Flatiron {
public:
    char brand[20];
    char model[25];
    char color[15];
    double minimal_temperature;
    double maximum_temperature;
    bool steam;
    double power;
};

int main() {
    Flatiron iron;
    strcpy_s(iron.brand, "Tefal ");
    strcpy_s(iron.model, "Virtuo FV1710");
    strcpy_s(iron.color, "Blue/White");
    iron.minimal_temperature = 60;
    iron.maximum_temperature = 120;
    iron.steam = true;
    iron.power = 1800;

    cout << "Brand: " << iron.brand << endl;
    cout << "Model: " << iron.model << endl;
    cout << "Color: " << iron.color << endl;
    cout << "Minimum temperature: " << iron.minimal_temperature << endl;
    cout << "Maximum temperature: " << iron.maximum_temperature << endl;
    cout << "Steam generation: "; (iron.steam == 1) ? cout << "Yes\n" : cout << "No\n"; 
    cout << "Power: " << iron.power << " W" << endl;


    int choice;
    while (true) {
        cout << "\nChoose what to change:" << endl;
        cout << "1 - Brand" << endl;
        cout << "2 - Model" << endl;
        cout << "3 - Color" << endl;
        cout << "4 - Minimum temperature" << endl;
        cout << "5 - Maximum temperature" << endl;
        cout << "6 - Steam generation" << endl;
        cout << "7 - Power" << endl;
        cout << "0 - Exit" << endl;

        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            cout << "Enter new brand: ";
            cin >> iron.brand;
            break;
        case 2:
            cout << "Enter new model: ";
            cin >> iron.model;
            break;
        case 3:
            cout << "Enter new color: ";
            cin >> iron.color;
            break;
        case 4:
            cout << "Enter new minimum temperature (C): ";
            cin >> iron.minimal_temperature;
            break;
        case 5:
            cout << "Enter new maximum temperature (C): ";
            cin >> iron.maximum_temperature;
            break;
        case 6:
            cout << "Enter new value for steam generation (0/1): ";
            cin >> iron.steam;
            break;
        case 7:
            cout << "Enter new power (W): ";
            cin >> iron.power;
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice, please try again." << endl;
            break;
        }

        cout << "\nUpdated Flatiron Machine Details:" << endl;
        cout << "Brand: " << iron.brand << endl;
        cout << "Model: " << iron.model << endl;
        cout << "Color: " << iron.color << endl;
        cout << "Minimum temperature: " << iron.minimal_temperature << " C" << endl;
        cout << "Maximum temperature: " << iron.maximum_temperature << " C" << endl;
        cout << "Steam generation: "; (iron.steam == 1) ? cout << "Yes\n" : cout << "No\n";
        cout << "Power: " << iron.power << " W" << endl;
    }

    return 0;
}