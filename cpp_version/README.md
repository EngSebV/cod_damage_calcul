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
