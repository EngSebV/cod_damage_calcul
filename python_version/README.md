# COD Damage Calculator - Python Version

## 1. Introduction
The **COD Damage Calculator** in Python calculates the damage reduction based on material types (Wood, Metal, Concrete). The tool allows users to input the base damage and select a material type. If the material type is unknown, it estimates the material based on the damage dealt.

## 2. Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/cod-damage-calculator-python.git
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

## 3. Usage Guide

1. Run the script and input the base damage and material type (Wood, Metal, Concrete).
2. If the material type is unknown, the script will prompt you to enter the damage dealt after reduction and estimate the material type.

#### Example:
```bash
Enter base damage: 100
Enter material type (1 for Wood, 2 for Metal, 3 for Concrete, 0 if unknown): 2
Resulting damage: 50.00
