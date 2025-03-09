//cpp version
#include <iostream>
#include <iomanip>  
#include <string>

using namespace std;

int main() {
    float base_damage, dealt_damage, resulting_damage;
    int material_type;

    cout << "Welcome to COD damage calculator. The materials are as follows: "
         << "Wood = 1, Metal = 2, Concrete = 3. If you don't know the material, type 0." << endl;

    cout << "Enter base damage: ";
    cin >> base_damage;

    cout << "Enter material type (1, 2, 3, or 0): ";
    cin >> material_type;

    if (material_type != 1 && material_type != 2 && material_type != 3 && material_type != 0) {
        cout << "Error: Invalid material type. If you don't know the material, type 0." << endl;
    } else {
       
        cout << fixed << setprecision(2);

        if (material_type == 1) {  // Wood
            resulting_damage = base_damage - (0.3 * base_damage);
            cout << "Resulting damage: " << resulting_damage << endl;
        } else if (material_type == 2) {  // Metal
            resulting_damage = base_damage - (0.5 * base_damage);
            cout << "Resulting damage: " << resulting_damage << endl;
        } else if (material_type == 3) {  // Concrete
            resulting_damage = base_damage - (0.7 * base_damage);
            cout << "Resulting damage: " << resulting_damage << endl;
        } else if (material_type == 0) {  // Unknown material
            cout << "Enter the damage dealt after reduction: ";
            cin >> dealt_damage;

            float reduction_percent = (1 - (dealt_damage / base_damage)) * 100;
            string material;

            if (reduction_percent == 30) {
                material = "Wood";
            } else if (reduction_percent == 50) {
                material = "Metal";
            } else if (reduction_percent == 70) {
                material = "Concrete";
            } else {
                material = "Unknown";
            }

            cout << "The material is: " << material << endl;
            resulting_damage = dealt_damage;
            cout << "Resulting damage: " << resulting_damage << endl;
        }
    }

    return 0;
}
