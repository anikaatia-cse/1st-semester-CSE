# DISCRETE_MATHEMATICS
# Logical Proofs - De Morgan's Law
# Meaning of Variables:
# p = You get a 4.0 GPA this semester.
# q = Your parents buy you a new laptop.
# not (p or q) == (not p) and (not q)

# STEP 1: Set Up Our Inputs
p = True
q = False

# STEP 2: Calculate the Left Side of De Morgan's Law
# "It is NOT true that you get a 4.0 GPA OR your parents buy you a new laptop.
left_side = not (p or q)  # This will be False because p is True, so the OR statement is True, and NOT True is False."

# STEP 3: Calculate the Right Side of De Morgan's Law
# "You did NOT get a 4.0 GPA AND your parents did NOT buy a laptop."
right_side = (not p) and (not q)  # This will also be False because not p is False (since p is True), and not q is True (since q is False), but False AND True is False.

# STEP 4: Check if Both Sides are Equal
is_de_morgan_true = (left_side == right_side)  # This will be True because both sides are False.

# STEP 5: Print the Result
print("Left-Hand Side result is:", left_side)
print("Right-Hand Side result is:", right_side)
print("Does De Morgan's Law hold True for our inputs?", is_de_morgan_true)