# COD Damage Calculator - C++ Version

## 1. Introduction
The **COD Damage Calculator** in C++ calculates the damage reduction based on material types (Wood, Metal, Concrete). Users can input the base damage and select a material. The tool can also estimate the material type based on damage dealt.

## 2. Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/EngSebV/cod_damage_calcul.git
    ```
2. Navigate to the C++ version directory:
    ```bash
    cd cpp_version
    ```
3. Compile the C++ file:
    ```bash
    g++ cod_dmg_calculator.cpp -o cod_dmg_calculator
    ```
4. Run the program:
    ```bash
    ./cod_dmg_calculator
    ```

## 3. Usage Guide

1. Compile and run the program. Enter the base damage and the material type (Wood, Metal, Concrete).
2. If the material type is unknown, input the resulting damage, and the tool will estimate the material.

#### Example:
```bash
Enter base damage: 100
Enter material type (1 for Wood, 2 for Metal, 3 for Concrete, 0 if unknown): 1
Resulting damage: 70.00
```
## 4. Technical Documentation
- Main Script: cod_dmg_calculator.cpp
- Structure:
  - The program uses simple C++ control structures and performs calculations based on user inputs.
  - It supports both material-type-based damage calculation and material estimation based on dealt damage.

 ## 5. Code Example
 ```bash
// Example: C++ damage calculation for Metal
float base_damage = 100;
int material_type = 2;  // Metal
float resulting_damage = base_damage - (0.5 * base_damage);
cout << "Resulting damage: " << fixed << setprecision(2) << resulting_damage << endl;
```

## 6. Common Errors
- Invalid Material Type:
If you input a number other than 1, 2, 3, or 0 for the material type, an error message will be displayed.
- Non-numeric Input:
Inputting a non-numeric value for base damage will trigger an error.
- Installation errors:
Make sure you have Git and a C++ compiler (like MinGW or g++) installed.
- Calculation errors:
This code doesnt currently take Armor and Bullet types as a variable for the damage, all calculations asume damage without armor and default bullet types.

## 7. Contributions
All contributions are welcome. To further expand this project, adding the armor and bullet type variables to the calculations will make it more useful and complete for the users. To make contributions fork the repository on GitHub, make your changes, and submit a pull request for review.

## 8. License
This project is licensed under the GNU General Public License (GPL) version 3. You can use, modify, and distribute the software under the same license. See the LICENSE file for more details.
