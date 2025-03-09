# Python Version
print(
    "Welcome to COD damage calculator. The materials are as follows:\n"
    "Wood = 1, Metal = 2, Concrete = 3. If you don't know the material, type 0."
)

try:
    base_damage = float(input("Enter base damage: "))
    material_type = int(input("Enter material type (1, 2, 3, or 0): "))

    if material_type not in (1, 2, 3, 0):
        print("Error: Invalid material type. If you don't know the material, type 0.")
    else:
        if material_type == 1:
            resulting_damage = base_damage - (0.3 * base_damage)
        elif material_type == 2:
            resulting_damage = base_damage - (0.5 * base_damage)
        elif material_type == 3:
            resulting_damage = base_damage - (0.7 * base_damage)
        elif material_type == 0:
            dealt_damage = float(input("Enter the damage dealt after reduction: "))
            reduction_percent = (1 - (dealt_damage / base_damage)) * 100

            if reduction_percent == 30:
                material = "Wood"
            elif reduction_percent == 50:
                material = "Metal"
            elif reduction_percent == 70:
                material = "Concrete"
            else:
                material = "Unknown"

            print(f"The material is: {material}")
            resulting_damage = dealt_damage

        print(f"Resulting damage: {resulting_damage:.2f}")

except ValueError:
    print("Error: Please enter numeric values for damage and material type.")
