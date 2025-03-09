# COD Damage Calculator

## 1. Introduction
The **COD Damage Calculator** is a tool designed to calculate the damage reduction for different materials in the game. Users can input the base damage and select a material type (Wood, Metal, or Concrete), and the tool will calculate the resulting damage based on the material's reduction percentage. It also includes a feature to estimate the material based on damage reduction. This project is available in both Python and C++.

## 2. Installation

### Python
To install and run the Python version of the **COD Damage Calculator**, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/cod-damage-calculator.git
    ```
2. Navigate to the Python version directory:
    ```bash
    cd python_version
    ```
3. Run the Python script:
    ```bash
    python cod_dmg_calculator.py
    ```

### C++
To install and run the C++ version of the **COD Damage Calculator**, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/cod-damage-calculator.git
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

### Python Version
1. Run the script and input the base damage and material type (Wood, Metal, Concrete).
2. If you don't know the material type, the script will prompt you to enter the resulting damage, and it will estimate the material based on the percentage reduction.

### C++ Version
1. Compile and run the program. Input the base damage and material type.
2. Similar to the Python version, if you don't know the material, input the resulting damage and the tool will estimate the material.

#### Example (Python/C++):

```bash
Enter base damage: 100
Enter material type (1 for Wood, 2 for Metal, 3 for Concrete, 0 if unknown): 1
Resulting damage: 70.00
