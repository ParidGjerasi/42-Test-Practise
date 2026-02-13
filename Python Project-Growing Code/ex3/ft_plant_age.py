def ft_plant_age():
    harvest = int(input("Enter plant age in days:"))
    if(harvest>60):
        print("Plant is ready to harvest!")
    else:
        print("Plant needs more time to grow.")








# ft_plant_age
# Directory: ex3/
# Files to Submit: ft_plant_age.py
# Authorized: input(), int(), print()
# Write a function named ft_plant_age that asks for a plant’s age in days and tells if it’s ready
# to harvest (more than 60 days) or not.
# Example:
# >>>ft_plant_age()
# Enter plant age in days: 75
# Plant is ready to harvest!
# >>> ft_plant_age()
# Enter plant age in days: 45
# Plant needs more time to grow.
