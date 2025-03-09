# COD Damage Calculator - Python Version

## 1. Introduction
The **COD Damage Calculator** in Python calculates the damage reduction based on material types (Wood, Metal, Concrete). The tool allows users to input the base damage and select a material type. If the material type is unknown, it estimates the material based on the damage dealt.

## 2. Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/EngSebV/cod_damage_calcul.git
    ```
2. Navigate to the Python version directory:
    ```bash
    cd python_version
    ```
3. Install Python if you haven't already:  
   - [Download Python](https://www.python.org/downloads/) and follow the installation steps.
   
4. Run the Python script:
    ```bash
    python cod_dmg_calculator.py
    ```
### Linux
follow the same steps until 3. <br>
4. Run the python script:
```bash
python3 cod_dmg_calculator.py
```
## 3. Usage Guide

1. Run the script and input the base damage and material type (Wood, Metal, Concrete).
2. If the material type is unknown, the script will prompt you to enter the damage dealt after reduction and estimate the material type.

#### Example:
```bash
Enter base damage: 100
Enter material type (1 for Wood, 2 for Metal, 3 for Concrete, 0 if unknown): 2
Resulting damage: 50.00
```

## 4. Technical Documentation
- Main Script: cod_dmg_calculator.py
- Structure:
  - The script includes logic for user input, validation, damage calculation, and material estimation.
  - It handles invalid inputs and performs calculations based on material type or damage dealt.

 ## 5. Code Example
 ```bash
# Example: Python damage calculation for Metal
base_damage = 100
material_type = 2  # Metal
resulting_damage = base_damage - (0.5 * base_damage)
print(f"Resulting damage: {resulting_damage:.2f}")
```

## 6. Common Errors
- Invalid Material Type:
If you input a number other than 1, 2, 3, or 0 for the material type, an error message will be displayed.
- Non-numeric Input:
Inputting a non-numeric value for base damage will trigger an error.
- Installation errors:
Make sure you have Git and Python installed.
- Calculation errors:
This code doesnt currently take Armor and Bullet types as a variable for the damage, all calculations asume damage without armor and default bullet types.

## 7. Contributions
All contributions are welcome. To further expand this project, adding the armor and bullet type variables to the calculations will make it more useful and complete for the users. To make contributions fork the repository on GitHub, make your changes, and submit a pull request for review.

## 8. License
This project is licensed under the GNU General Public License (GPL) version 3. You can use, modify, and distribute the software under the same license. See the LICENSE file for more details.
